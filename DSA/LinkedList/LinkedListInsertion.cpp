//Single linked List Insertion
#include <iostream>
using namespace std;

typedef struct node {
    int data;
    struct node *next;
} node;

node *head = NULL;

node* createNode(int data) {
    node* newNode = (node*)malloc(sizeof(node));
    if (!newNode) {
        cout << "Memory allocation error" << endl;
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtFirst(int data) {
    node* newNode = createNode(data);
    newNode->next = head;
    head = newNode;
}

void insertAtLast(int data) {
    node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPosition(int data, int pos) {
    node* newNode = createNode(data);
    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }
    node* temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of range" << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}

void display() {
    node* temp = head;
    if (temp == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int choice, data, pos;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert at the beginning\n";
        cout << "2. Insert at the end\n";
        cout << "3. Insert at a position\n";
        cout << "4. Display the list\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the data to insert at the beginning: ";
                cin >> data;
                insertAtFirst(data);
                break;
            case 2:
                cout << "Enter the data to insert at the end: ";
                cin >> data;
                insertAtLast(data);
                break;
            case 3:
                cout << "Enter the data to insert: ";
                cin >> data;
                cout << "Enter the position: ";
                cin >> pos;
                insertAtPosition(data, pos);
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
