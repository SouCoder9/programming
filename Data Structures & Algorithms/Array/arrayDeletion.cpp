#include <stdio.h>

// Function to delete the last element
void deleteLast(int arr[], int *size) {
    if (*size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    (*size)--; // Reducing the size by 1 deletes the last element
    printf("Last element deleted.\n");
}

// Function to delete the first element
void deleteFirst(int arr[], int *size) {
    if (*size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    for (int i = 0; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    (*size)--; // Reducing the size by 1
    printf("First element deleted.\n");
}

// Function to delete an element from a given position
void deleteAtPosition(int arr[], int *size, int pos) {
    if (*size <= 0) {
        printf("Array is empty.\n");
        return;
    }
    if (pos < 0 || pos >= *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left from the given position
    }
    (*size)--; // Reducing the size by 1
    printf("Element at position %d deleted.\n", pos);
}

// Function to display the array
void displayArray(int arr[], int size) {
    if (size == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, choice, pos;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter %d elements of the array: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\nMenu:\n");
        printf("1. Delete Last Element\n");
        printf("2. Delete First Element\n");
        printf("3. Delete Element at a Given Position\n");
        printf("4. Display Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                deleteLast(arr, &size);
                break;
            case 2:
                deleteFirst(arr, &size);
                break;
            case 3:
                printf("Enter the position to delete (0-based index): ");
                scanf("%d", &pos);
                deleteAtPosition(arr, &size, pos);
                break;
            case 4:
                displayArray(arr, size);
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
