#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int A[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> A[i]; 
    }
    
    int k, l, r;
    cin >> k >> l >> r; 

    set<int> unique(A, A + n);
    
    int iCount = unique.size();
    int Range = r - l + 1;
    
    int Count = min(iCount + k, Range);
    
    cout << Count << endl; 
    
    return 0;
}
