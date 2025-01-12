#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        // If k is greater than the length of the string, it's impossible to construct k palindromes
        if (k > s.size()) {
            return false;
        }

        // Count the frequency of each character
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }

        // Count the number of characters with odd frequencies
        int oddCount = 0;
        for (const auto& entry : freq) {
            if (entry.second % 2 != 0) {
                oddCount++;
            }
        }

        // To construct k palindromes, the oddCount must not exceed k
        return oddCount <= k;
    }
};

int main() {
    Solution solution;
    
    // Example 1
    string s1 = "annabelle";
    int k1 = 2;
    cout << (solution.canConstruct(s1, k1) ? "true" : "false") << endl; // Output: true

    // Example 2
    string s2 = "leetcode";
    int k2 = 3;
    cout << (solution.canConstruct(s2, k2) ? "true" : "false") << endl; // Output: false

    // Example 3
    string s3 = "true";
    int k3 = 4;
    cout << (solution.canConstruct(s3, k3) ? "true" : "false") << endl; // Output: true

    return 0;
}
