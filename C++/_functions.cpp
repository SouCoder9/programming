#include <iostream>
using namespace std;

// Function that uses call by reference
void modifyValue(int &x) {
    x = 100; // Modifies the original variable
    cout << "Inside modifyValue: " << x << endl;
}

int main() {
    int a = 10;

    cout << "Before calling modifyValue: " << a << endl;
    modifyValue(a); // Pass by reference
    cout << "After calling modifyValue: " << a << endl;

    return 0;
}
