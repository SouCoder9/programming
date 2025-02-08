#include <iostream>
#include <string>
using namespace std;

long digitSum(long n) {
    long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int superDigit(long n, int k) {
    long sum = digitSum(n) * k;
    while (sum >= 10) {
        sum = digitSum(sum);
    }
    return sum;
}

int main() {
    long n;
    int k;
    cin >> n >> k;
    cout << superDigit(n, k) << endl;
    return 0;
}
