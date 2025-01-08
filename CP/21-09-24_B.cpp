#include <iostream>
using namespace std;

long long Odd(long long x) {
    return (x + 1) / 2;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, k; 
        cin >> n >> k;

        long long s = max(1LL, n - k + 1);

     
        long long Count = Odd(n) - Odd(s - 1);

 
        if (Count % 2 == 0) {
            cout << "YES" << endl; 
        } else {
            cout << "NO" << endl; 
        }
    }

    return 0;
}
