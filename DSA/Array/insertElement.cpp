#include <iostream>
using namespace std;

void insertAtLast(int arr[], int &size)
{
    int ele;
    cout << "Enter the element to be inserted at the last: ";
    cin >> ele;
    arr[size] = ele;
    size++;
}

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertAtFirst(int arr[], int &size)
{
    int ele;
    cout << "Enter the element to be inserted at the first: ";
    cin >> ele;
    for (int i = size - 1; i >= 0; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[0] = ele;
    size++;
}

void insertAtAnyPos(int arr[], int &size)
{
    int ele, pos;
    cout << "Enter the element to be inserted: ";
    cin >> ele;
    cout << "Enter the position (0-based index): ";
    cin >> pos;

    // Check if the position is valid
    if (pos < 0 || pos > size)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = size - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = ele;
    size++;
}

int main()
{
    int size, choice;
    cout << "Enter initial size of the array: ";
    cin >> size;

    // Allocate memory dynamically using new
    int *arr = new int[size]; // Add extra space to handle insertions

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    while (1)
    {
        cout << "MENU:\n1. Display\n2. Insert at last\n3. Insert at first\n4. Insert at any position\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            displayArray(arr, size);
            break;
        case 2:
            insertAtLast(arr, size);
            break;
        case 3:
            insertAtFirst(arr, size);
            break;
        case 4:
            insertAtAnyPos(arr, size);
            break;
        case 5:
            delete[] arr; // Free allocated memory
            exit(0);
        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }
}
