#include <iostream>
using namespace std;

int main() {
    // Declare a 3D array of size 2x3x3 (2 layers, each with 3x3 matrix)
    int tensor[2][3][3];

    // Input: Fill the 3D array
    cout << "Enter elements of the 3D array (2 layers of 3x3 matrices):" << endl;
    for (int k = 0; k < 2; k++) {
        cout << "Layer " << k + 1 << ":" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "Enter element [" << k << "][" << i << "][" << j << "]: ";
                cin >> tensor[k][i][j];
            }
        }
    }

    // Output: Print the 3D array
    cout << "\nThe 3D array is:" << endl;
    for (int k = 0; k < 2; k++) {
        cout << "Layer " << k + 1 << ":" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << tensor[k][i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
