#include <iostream>
using namespace std;

int main() {
    // Lambda function to add two numbers
    auto add = [](int a, int b) {
        return a + b;
    };

    cout << "Sum of 5 and 3: " << add(5, 3) << endl;
    return 0;
}
