#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isPrefixAndSuffix(const string& str1, const string& str2) {
    if (str1.size() > str2.size()) {
        return false;
    }
    if (str2.substr(0, str1.size()) != str1) {
        return false;
    }
    if (str2.substr(str2.size() - str1.size()) != str1) {
        return false;
    }
    return true;
}
int countValidPairs(const vector<string>& words) {
    int n = words.size();
    int count = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (isPrefixAndSuffix(words[i], words[j])) {
                ++count;
            }
        }
    }

    return count;
}

int main() {
    vector<string> words1 = {"a", "aba", "ababa", "aa"};
    vector<string> words2 = {"pa", "papa", "ma", "mama"};
    vector<string> words3 = {"abab", "ab"};

    cout << countValidPairs(words1) << endl; 
    cout << countValidPairs(words2) << endl; 
    cout << countValidPairs(words3) << endl; 

    return 0;
}
