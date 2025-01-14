// syntax:---
// ClassName(parameters) : ClassName(other_parameters) {
//     // Additional initialization (if needed)
// }

#include <iostream>
using namespace std;

class MyClass {
private:
    int x, y;

public:
    // Constructor 1: Delegates to Constructor 2
    MyClass() : MyClass(0, 0) { 
        cout << "Default constructor called (x=0, y=0)." << endl;
    }

    // Constructor 2: Primary constructor
    MyClass(int a, int b) : x(a), y(b) {
        cout << "Parameterized constructor called (x=" << x << ", y=" << y << ")." << endl;
    }

    // Display values
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    // Default constructor
    MyClass obj1;
    obj1.display();

    // Parameterized constructor
    MyClass obj2(10, 20);
    obj2.display();

    return 0;
}
