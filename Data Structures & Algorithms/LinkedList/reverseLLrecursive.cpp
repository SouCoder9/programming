#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // Function to reverse a singly linked list using recursion
    ListNode* reverseList(ListNode* head) {
        // Base case: if the list is empty or has only one node, return head
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        // Recursive step: reverse the rest of the list
        ListNode* newHead = reverseList(head->next);

        // Reversing the pointers
        head->next->next = head;
        head->next = nullptr;

        // Return the new head of the reversed list
        return newHead;
    }
};

// Helper function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Creating a sample linked list: 1 -> 2 -> 3 -> 4 -> 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Printing the original list
    std::cout << "Original List: ";
    printList(head);

    // Reversing the linked list
    Solution solution;
    ListNode* reversedHead = solution.reverseList(head);

    // Printing the reversed list
    std::cout << "Reversed List: ";
    printList(reversedHead);

    return 0;
}
