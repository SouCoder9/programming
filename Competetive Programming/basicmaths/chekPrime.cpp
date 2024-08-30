#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i*i <= n; i++)  // if i is a factor of n then n/i is also a factor of n;
    {
        if (n % i == 0)
        {
            count++;
        }
        if(i != n/i){
            count++;
        }
    }
        // if (count == 2)
        // {
        //     cout << "prime";
        // }
        // else
        // {
        //     cout << "not prime";
        // }
        cout << count;
    return 0;
}