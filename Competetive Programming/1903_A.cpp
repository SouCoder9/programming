#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
while (t--)
{
    int n, k;
    cin >> n >> k;
    vector<int>v(n);
    for(int i = 0 ; i < n; i++ ){
        cin >> v[i];
    }
    bool isSorted = is_sorted(v.begin(),v.end());
    if(isSorted || k > 1){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
        }
}

    return 0;
}