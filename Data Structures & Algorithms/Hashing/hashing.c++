#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int hash1[30] = {0};
    for(int i = 0; i < n; i++){
        hash1[arr[i]]+= 1;
    }
    int t = n;
    while(t--){
        cout << hash1[t]<<" ";
    }
    return 0;
}