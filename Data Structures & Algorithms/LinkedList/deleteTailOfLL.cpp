#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

// Function to create a linked list from a vector of integers
Node* createLinkedList(const vector<int>& arr) {
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* current = head;
    for (size_t i = 1; i < arr.size(); ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

// Function to delete a node given a pointer to it
void deleteNode(Node* node) {
    // Ensure the node and the next node are not null
    if (node == nullptr || node->next == nullptr) {
        return;
    }

    // Copy the data from the next node to the current node
    Node* nextNode = node->next;
    node->data = nextNode->data;

    // Update the next pointer to skip the next node
    node->next = nextNode->next;

    // Delete the next node
    delete nextNode;
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    vector<int> arr = {2, 5, 8, 14, 89};
    Node* head = createLinkedList(arr);
    cout << "Original list: ";
    printLinkedList(head);

    // Deleting the first node
    if (head != nullptr) {
        Node* nodeToDelete = head;
        if (head->next != nullptr) {
            deleteNode(nodeToDelete);
        } else {
            // Special case: only one element in the list
            delete head;
            head = nullptr;
        }
    }

    cout << "List after deletion: ";
    printLinkedList(head);

    // Clean up the remaining list
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}
