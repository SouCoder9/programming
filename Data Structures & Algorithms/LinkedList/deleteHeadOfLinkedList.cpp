#include <iostream>
#include <vector>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* createLinkedList(const std::vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}
Node* deleteLinkedList(Node* head) {
    while (head == nullptr) return head;
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    
}

int main() {
    std::vector<int> arr = {2, 5, 8, 14, 89};
    Node* head = createLinkedList(arr);
    deleteLinkedList(head);
    return 0;
}