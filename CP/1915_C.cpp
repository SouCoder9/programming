#include <iostream>
#include <cmath>

using namespace std;

string issqr(long long num) {
    long long x = (long long)sqrt(num);
    if (x * x == num) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            sum += temp;
        }
        cout << issqr(sum) << endl;
    }
    return 0;
}
