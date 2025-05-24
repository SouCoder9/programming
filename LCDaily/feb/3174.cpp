#include <iostream>
#include <cctype>

using namespace std;

string clearDigits(string s) {
    int i = 0;
    while (i < s.length()) {
        if (isdigit(s[i])) {
            s.erase(i, 1); // Remove the digit
        } else {
            i++; // Only increment if no deletion occurs
        }
    }
    return s;
}

int main() {
    string s = "ab12c3d45e";
    cout << clearDigits(s) << endl;  // Output: "abcde"
    return 0;
}
