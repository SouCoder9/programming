#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool canBeValid(string s, string locked) {
        // If the length of the string is odd, it is impossible to make it valid
        if (s.size() % 2 != 0) return false;

        // Left-to-right pass
        int openCount = 0, freeCount = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (locked[i] == '0') {
                freeCount++; // Can be used as '(' or ')'
            } else if (s[i] == '(') {
                openCount++;
            } else { // s[i] == ')'
                if (openCount > 0) {
                    openCount--;
                } else if (freeCount > 0) {
                    freeCount--;
                } else {
                    return false;
                }
            }
        }

        // Right-to-left pass
        int closeCount = 0;
        freeCount = 0;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (locked[i] == '0') {
                freeCount++; // Can be used as '(' or ')'
            } else if (s[i] == ')') {
                closeCount++;
            } else { // s[i] == '('
                if (closeCount > 0) {
                    closeCount--;
                } else if (freeCount > 0) {
                    freeCount--;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
};

int main() {
    Solution solution;

    // Example 1
    string s1 = "))()))";
    string locked1 = "010100";
    cout << (solution.canBeValid(s1, locked1) ? "true" : "false") << endl; // Output: true

    // Example 2
    string s2 = "()()";
    string locked2 = "0000";
    cout << (solution.canBeValid(s2, locked2) ? "true" : "false") << endl; // Output: true

    // Example 3
    string s3 = ")";
    string locked3 = "0";
    cout << (solution.canBeValid(s3, locked3) ? "true" : "false") << endl; // Output: false

    return 0;
}
