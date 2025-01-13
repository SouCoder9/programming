#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        vector<int> freq(26, 0);
        int del = 0;

        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a'] += 1;
            if (freq[s[i] - 'a'] == 3) {
                freq[s[i] - 'a'] -= 2;
                del += 2;
            }
        }
        return n - del;
    }
};

int main() {
    Solution solution;

    // Example test cases
    string test1 = "aabbcc";
    cout << "Minimum length of " << test1 << " is: " << solution.minimumLength(test1) << endl;

    string test2 = "aaabbbccc";
    cout << "Minimum length of " << test2 << " is: " << solution.minimumLength(test2) << endl;

    string test3 = "abcabcabc";
    cout << "Minimum length of " << test3 << " is: " << solution.minimumLength(test3) << endl;

    string test4 = "a";
    cout << "Minimum length of " << test4 << " is: " << solution.minimumLength(test4) << endl;

    return 0;
}
