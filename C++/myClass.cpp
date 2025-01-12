#include <iostream>
using namespace std;

class MyClass {
public:
    void hello() {
        cout << "Hello, World!" << endl;
    }
    int myAge;
    string myName;
    bool isEmployed;
};

int main() {
    MyClass obj;
    obj.hello();
    cout << "Enter your age, name, and employment status: ";
    cin >> obj.myAge >> obj.myName >> obj.isEmployed;
    cout << obj.myAge << " " << obj.myName << " " << obj.isEmployed << endl;
    return 0;
}