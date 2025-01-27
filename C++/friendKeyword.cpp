#include <iostream>
using namespace std;

class MyClass {
private:
    int number; // Private member

public:
    MyClass(int n) : number(n) {} // Constructor to initialize 'number'

    // Declaring a friend function
    friend void displayNumber(MyClass obj);
};

// Friend function definition
void displayNumber(MyClass obj) {
    // Can access the private member 'number'
    cout << "The number is: " << obj.number << endl;
}

int main() {
    MyClass obj(42);
    displayNumber(obj); // Friend function can access private member

    return 0;
}
