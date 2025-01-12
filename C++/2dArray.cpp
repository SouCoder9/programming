#include <iostream>
using namespace std;

int main() {
    // Declare a 2D array of size 3x3
    int matrix[3][3];

    // Input: Fill the 2D array
    cout << "Enter elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }

    // Output: Print the 2D array
    cout << "\nThe 3x3 matrix is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
