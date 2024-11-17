#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum size of the binary tree array

int tree[MAX];  // Array to store the binary tree
int count = 0;  // Count of total nodes in the tree

// Function to initialize the tree array
void initializeTree() {
    for (int i = 0; i < MAX; i++) {
        tree[i] = -1;  // Using -1 to indicate an empty node
    }
}

// Function to insert a node in the binary tree (Level Order Insertion)
void insert(int data) {
    if (count >= MAX) {
        printf("Tree is full!\n");
        return;
    }
    tree[count++] = data;
}

// Function to create a binary tree
void createTree() {
    int data, choice;
    do {
        printf("Enter data to insert (-1 to stop): ");
        scanf("%d", &data);
        if (data != -1) {
            insert(data);
        }
        printf("Do you want to continue? (1 - Yes / 0 - No): ");
        scanf("%d", &choice);
    } while (choice);
}

// Inorder traversal (Left, Root, Right)
void inorder(int index) {
    if (index >= count || tree[index] == -1)
        return;

    inorder(2 * index + 1);  // Visit left subtree
    printf("%d ", tree[index]);  // Visit root
    inorder(2 * index + 2);  // Visit right subtree
}

// Preorder traversal (Root, Left, Right)
void preorder(int index) {
    if (index >= count || tree[index] == -1)
        return;

    printf("%d ", tree[index]);  // Visit root
    preorder(2 * index + 1);  // Visit left subtree
    preorder(2 * index + 2);  // Visit right subtree
}

// Postorder traversal (Left, Right, Root)
void postorder(int index) {
    if (index >= count || tree[index] == -1)
        return;

    postorder(2 * index + 1);  // Visit left subtree
    postorder(2 * index + 2);  // Visit right subtree
    printf("%d ", tree[index]);  // Visit root
}

// Function to count the number of nodes
int countNodes() {
    return count;
}

// Function to calculate the height of the tree
int height(int index) {
    if (index >= count || tree[index] == -1)
        return 0;

    int leftHeight = height(2 * index + 1);
    int rightHeight = height(2 * index + 2);

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

// Function to count the number of leaf nodes
int countLeafNodes(int index) {
    if (index >= count || tree[index] == -1)
        return 0;

    // If both left and right children are absent, it's a leaf
    if ((2 * index + 1 >= count || tree[2 * index + 1] == -1) &&
        (2 * index + 2 >= count || tree[2 * index + 2] == -1)) {
        return 1;
    }

    return countLeafNodes(2 * index + 1) + countLeafNodes(2 * index + 2);
}

// Function to count the number of internal nodes
int countInternalNodes(int index) {
    if (index >= count || tree[index] == -1)
        return 0;

    // If it has at least one child, it's an internal node
    if ((2 * index + 1 < count && tree[2 * index + 1] != -1) ||
        (2 * index + 2 < count && tree[2 * index + 2] != -1)) {
        return 1 + countInternalNodes(2 * index + 1) + countInternalNodes(2 * index + 2);
    }

    return 0;
}

// Function to search for a data value in the binary tree
int search(int data) {
    for (int i = 0; i < count; i++) {
        if (tree[i] == data)
            return i;
    }
    return -1;
}

// Main function
int main() {
    int choice, data;

    initializeTree();

    while (1) {
        printf("\nBinary Tree Operations:\n");
        printf("1. Create Tree\n");
        printf("2. Display Inorder\n");
        printf("3. Display Preorder\n");
        printf("4. Display Postorder\n");
        printf("5. Count Nodes\n");
        printf("6. Find Height of the Tree\n");
        printf("7. Count Leaf Nodes\n");
        printf("8. Count Internal Nodes\n");
        printf("9. Search Data\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createTree();
                break;
            case 2:
                printf("Inorder Traversal: ");
                inorder(0);
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal: ");
                preorder(0);
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal: ");
                postorder(0);
                printf("\n");
                break;
            case 5:
                printf("Total Nodes: %d\n", countNodes());
                break;
            case 6:
                printf("Height of the Tree: %d\n", height(0));
                break;
            case 7:
                printf("Leaf Nodes: %d\n", countLeafNodes(0));
                break;
            case 8:
                printf("Internal Nodes: %d\n", countInternalNodes(0));
                break;
            case 9:
                printf("Enter data to search: ");
                scanf("%d", &data);
                int index = search(data);
                if (index != -1)
                    printf("Data found at index: %d\n", index);
                else
                    printf("Data not found!\n");
                break;
            case 10:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}
 