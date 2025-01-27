#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            s += "I hate";
        } else {
            s += "I love";
        }
        if (i != n) {
            s += " that ";
        }
    }
    s += " it";
    cout << s;
    return 0;
}
