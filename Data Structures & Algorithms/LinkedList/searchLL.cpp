#include <iostream>

// Define a node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insert(Node** head_ref, int new_data) {
    Node* new_node = new Node(); // Create a new node
    new_node->data = new_data;   // Set the data for the new node
    new_node->next = (*head_ref); // Make the new node point to the current head
    (*head_ref) = new_node;      // Move the head to point to the new node
}

// Function to search for an element in the linked list
bool search(Node* head, int x) {
    Node* current = head; // Start with the head node
    while (current != nullptr) {
        if (current->data == x) {
            return true; // Element found
        }
        current = current->next; // Move to the next node
    }
    return false; // Element not found
}

// Function to print the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "NULL\n";
}

int main() {
    Node* head = nullptr; // Initialize the head to nullptr

    // Insert elements into the linked list
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    insert(&head, 40);
    insert(&head, 50);

    std::cout << "Linked List: ";
    printList(head);

    int x = 30;
    if (search(head, x)) {
        std::cout << "Element " << x << " is present in the linked list.\n";
    } else {
        std::cout << "Element " << x << " is not present in the linked list.\n";
    }

    return 0;
}
