#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> v(n, vector<int>(3));  
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    
        if ((v[i][0] + v[i][1] + v[i][2]) >= 2) {
            count++;
        }
    }
    
    cout << count;
    return 0;
}
