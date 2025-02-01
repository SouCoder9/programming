#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int c0 = 0, c1 = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) {
            ++c0;
            } else {
            ++c1;
            }
        }

        int result;
        if (c0 > 0) {
            result = ++c1;
        } else {
            result = c1 - 1;
        }

        cout << result << endl;
    }
    return 0;
}