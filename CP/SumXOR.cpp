#include <iostream>
using namespace std;
int sumXor(int n) {
    if (n == 0) return 0; 
    long count = 0;
    while (n > 0) {
        count += (n & 1) ^ 1;
        n /= 2;
    }
    
    return  count;
}

int main() {
    long n;
    cin >> n;
    cout << sumXor(n) << endl;
    return 0;
}
