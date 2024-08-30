#include <bits/stdc++.h>
using namespace std;

int cnt(int p, vector<vector<int>>& avl, set<int>& usd, vector<int>& asn) {
    int n = avl.size();
    
    if (p == n) {
        
        cout << "Valid assignment: ";
        for (int i = 0; i < n; ++i) {
            cout << asn[i] << " ";
        }
        cout << endl;
        return 1;
    }
    
    int c = 0;
    
    for (int t : avl[p]) {
        if (usd.find(t) == usd.end()) {
            usd.insert(t);
            asn[p] = t;
            
            c += cnt(p + 1, avl, usd, asn);
            
            usd.erase(t);
        }
    }
    
    return c;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> avl(n);
    
    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        avl[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> avl[i][j];
        }
    }
    
    // Debug print to check the input values
    cout << "Input values:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Position " << i << ": ";
        for (int v : avl[i]) {
            cout << v << " ";
        }
        cout << endl;
    }
    
    set<int> usd;
    vector<int> asn(n);

    int r = cnt(0, avl, usd, asn);
    
    cout  << r << endl;
    
    return 0;
}
