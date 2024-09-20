#include<bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string S;
        getline(cin, S);
        set<char> seen;
        string result;

        for (char c : S) {
            if (seen.find(c) == seen.end()) {
                seen.insert(c);
                result += c;
            }
        }

        cout << result << endl;
    }

    return 0;
}
