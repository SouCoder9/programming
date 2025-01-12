#include <iostream>
using namespace std;

// Function that uses call by value
void modifyValue(int x) {
    x = 100; // Modifies the local copy of the variable
    cout << "Inside modifyValue: " << x << endl;
}

int main() {
    int a = 10;

    cout << "Before calling modifyValue: " << a << endl;
    modifyValue(a); // Pass by value
    cout << "After calling modifyValue: " << a << endl;

    return 0;
}

