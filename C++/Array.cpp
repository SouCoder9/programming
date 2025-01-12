#include <iostream>
using namespace std;

int main() {
    // Declare an array of size 5
    int numbers[5];

    // Input: Ask the user to fill the array
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Output: Print the array elements
    cout << "\nYou entered: ";
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Calculate the sum of the array
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "Sum of the numbers: " << sum << endl;

    // Find the largest element
    int largest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    cout << "Largest number: " << largest << endl;

    // Find the smallest element
    int smallest = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }
    cout << "Smallest number: " << smallest << endl;

    return 0;
}
