#include <iostream>
#include <vector>
#include <string>
using namespace std;


int maxScore(const string& s) {
    int n = s.size();
    int maxScore = 0;
    int zerosLeft = 0, onesRight = 0;

    // Count total number of ones in the string
    for (char c : s) {
        if (c == '1') {
            ++onesRight;
        }
    }

    // Iterate through the string and calculate score for each split
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == '0') {
            ++zerosLeft;
        } else {
            --onesRight;
        }
        maxScore = max(maxScore, zerosLeft + onesRight);
    }

    return maxScore;
}

int main()
{
    string s1 = "011101";
    string s2 = "00111";
    string s3 = "1111";

    cout << "Example 1 Output (maxScore): " << maxScore(s1) << endl; // Output: 5
    cout << "Example 2 Output (maxScore): " << maxScore(s2) << endl; // Output: 5
    cout << "Example 3 Output (maxScore): " << maxScore(s3) << endl; // Output: 3
    return 0;
}
