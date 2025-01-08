#include <iostream>
using namespace std;

// Function to delete the last element
void deleteLast(int arr[], int &size) {
    if (size <= 0) {
        cout << "Array is empty." << endl;
        return;
    }
    --size; // Reducing the size by 1 deletes the last element
    cout << "Last element deleted." << endl;
}

// Function to delete the first element
void deleteFirst(int arr[], int &size) {
    if (size <= 0) {
        cout << "Array is empty." << endl;
        return;
    }
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left
    }
    --size; // Reducing the size by 1
    cout << "First element deleted." << endl;
}

// Function to delete an element from a given position
void deleteAtPosition(int arr[], int &size, int pos) {
    if (size <= 0) {
        cout << "Array is empty." << endl;
        return;
    }
    if (pos < 0 || pos >= size) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1]; // Shift elements to the left from the given position
    }
    --size; // Reducing the size by 1
    cout << "Element at position " << pos << " deleted." << endl;
}

// Function to display the array
void displayArray(int arr[], int size) {
    if (size == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main() {
    int arr[100], size, choice, pos;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input the elements of the array
    cout << "Enter " << size << " elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    while (1) {
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Delete Last Element" << endl;
        cout << "2. Delete First Element" << endl;
        cout << "3. Delete Element at a Given Position" << endl;
        cout << "4. Display Array" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                deleteLast(arr, size);
                break;
            case 2:
                deleteFirst(arr, size);
                break;
            case 3:
                cout << "Enter the position to delete (0-based index): ";
                cin >> pos;
                deleteAtPosition(arr, size, pos);
                break;
            case 4:
                displayArray(arr, size);
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}

