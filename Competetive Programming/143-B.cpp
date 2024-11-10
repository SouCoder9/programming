#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    int l = n - x;
    int c = 0;
    int a = 0;

    for (int i = 1; i <= l; ++i) {
        c += 1LL << i;
    }
    for (int i = l + 1; i <= n; ++i) {
        a += 1LL << i;
    }
    cout << a - c << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        solve();
    }

    return 0;
}