#include <bits/stdc++.h>
using namespace std;
int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int GCDArray(const vector<int>& arr) {
    int gcd = arr[0];
    for (size_t i = 1; i < arr.size(); i++) {
        gcd = GCD(gcd, arr[i]);
    }
    return gcd;
}

int countD(int num) {
    int count = 0;
    for (int i = 1; i * i <= num; ++i) {
        if (num % i == 0) {
           
            if (i == num / i)
                count += 1; 
            else
                count += 2; 
        }
    }
    return count;
}



int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int gcdOfArray = GCDArray(arr);
    int divisors = countD(gcdOfArray);
    cout << divisors << endl;
    

    return 0;
}