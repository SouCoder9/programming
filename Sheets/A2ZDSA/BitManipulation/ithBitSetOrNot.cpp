#include <iostream>
using namespace std;
    bool checkKthBit(int n, int k) {
        return ((n >> k) & 1) == 1; 
    }

    int main() {
        int n, k;
        cout << "Enter number: ";
        cin >> n;
        cout << "Enter bit position to check: ";
        cin >> k;

        if (checkKthBit(n, k)) {
            cout << "The " << k << "th bit is set." << endl;
        } else {
            cout << "The " << k << "th bit is not set." << endl;
        }

        return 0;
    }
