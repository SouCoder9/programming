#include <iostream>
using namespace std;

class MyClass {
private:
    int myAge;          // Private members
    string myName;
    bool isEmployed;

public:
    // Public method
    void hello() {
        cout << "Hello, World!" << endl;
    }

    // Setter for myAge
    void setAge(int age) {
        if (age >= 0) {
            myAge = age;
        } else {
            cout << "Invalid age!" << endl;
        }
    }

    // Getter for myAge
    int getAge() {
        return myAge;
    }

    // Setter for myName
    void setName(string name) {
        myName = name;
    }

    // Getter for myName
    string getName() {
        return myName;
    }

    // Setter for isEmployed
    void setEmploymentStatus(bool status) {
        isEmployed = status;
    }

    // Getter for isEmployed
    bool getEmploymentStatus() {
        return isEmployed;
    }
};

int main() {
    MyClass obj;

    obj.hello();

    // Using setters to assign values
    int age;
    string name;
    bool employed;

    cout << "Enter your age: ";
    cin >> age;
    obj.setAge(age);

    cout << "Enter your name: ";
    cin >> name;
    obj.setName(name);

    cout << "Are you employed? (1 for Yes, 0 for No): ";
    cin >> employed;
    obj.setEmploymentStatus(employed);

    // Using getters to retrieve and display values
    cout << "\nUser Details:" << endl;
    cout << "Age: " << obj.getAge() << endl;
    cout << "Name: " << obj.getName() << endl;
    cout << "Employment Status: " << (obj.getEmploymentStatus() ? "Employed" : "Unemployed") << endl;

    return 0;
}
