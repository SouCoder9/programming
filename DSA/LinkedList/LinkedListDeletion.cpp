//linked List deletion
#include <stdio.h>
#include <stdlib.h>

// Node structure for a singly linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to create a linked list
struct Node* createList() {
    struct Node* head = NULL;
    struct Node* temp = NULL;
    int data, choice;

    do {
        printf("Enter data: ");
        scanf("%d", &data);

        struct Node* newNode = createNode(data);

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }

        printf("Do you want to add more nodes? (1-Yes, 0-No): ");
        scanf("%d", &choice);
    } while (choice);

    return head;
}

// Function to display the list
void displayList(struct Node* head) {
    struct Node* temp = head;
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    printf("List elements: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to delete a node from the beginning of the list
struct Node* deleteFromFirst(struct Node* head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return NULL;
    }

    struct Node* temp = head;
    head = head->next;
    printf("Deleted element: %d\n", temp->data);
    free(temp);

    return head;
}

// Function to delete a node from the end of the list
struct Node* deleteFromLast(struct Node* head) {
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return NULL;
    }

    if (head->next == NULL) {
        printf("Deleted element: %d\n", head->data);
        free(head);
        return NULL;
    }

    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }

    printf("Deleted element: %d\n", temp->data);
    free(temp);
    prev->next = NULL;

    return head;
}

// Function to delete a node from any position in the list
struct Node* deleteFromAny(struct Node* head, int position) {
    if (head == NULL) {
        printf("List is empty, nothing to delete\n");
        return NULL;
    }

    if (position == 1) {
        return deleteFromFirst(head);
    }

    struct Node* temp = head;
    struct Node* prev = NULL;
    int count = 1;

    while (temp != NULL && count < position) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        return head;
    }

    printf("Deleted element: %d\n", temp->data);
    prev->next = temp->next;
    free(temp);

    return head;
}

int main() {
    struct Node* head = NULL;
    int choice, position;

    while (1) {
        printf("1. Create List\n");
        printf("2. Display List\n");
        printf("3. Delete from First\n");
        printf("4. Delete from Last\n");
        printf("5. Delete from Any Position\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                head = createList();
                break;
            case 2:
                displayList(head);
                break;
            case 3:
                head = deleteFromFirst(head);
                break;
            case 4:
                head = deleteFromLast(head);
                break;
            case 5:
                printf("Enter the position to delete: ");
                scanf("%d", &position);
                head = deleteFromAny(head, position);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
