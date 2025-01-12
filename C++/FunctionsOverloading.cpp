#include <iostream>
using namespace std;

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Function to add three numbers
int add(int a, int b, int c) {
    return a + b + c;
}
// Function to display an integer
void display(int value) {
    cout << "Integer: " << value << endl;
}

// Function to display a double
void display(double value) {
    cout << "Double: " << value << endl;
}

// Function to display a string
void display(string value) {
    cout << "String: " << value << endl;
}

// Function to calculate area of rectangle
double area(double length, double width = 1) {
    return length * width;
}


int main() {
    cout << "Sum of 2 and 3: " << add(2, 3) << endl;         // Calls add(int, int)
    cout << "Sum of 2, 3 and 4: " << add(2, 3, 4) << endl; // Calls add(int, int, int)
    display(10);           // Calls display(int)
    display(3.14);         // Calls display(double)
    display("Hello");  
    cout << "Area of square (side=5): " << area(5) << endl;           // width defaults to 1
    cout << "Area of rectangle (5x3): " << area(5, 3) << endl;       // Pass both parameters
    return 0;
    
}
