#include <climits>
#include <iostream>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // Determine the sign of the quotient
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;

        // Convert both numbers to positive using long to avoid overflow
        long long dvd = abs((long long)dividend);
        long long dvs = abs((long long)divisor);
        long long quotient = 0;

        // Using bitwise shifting to speed up division
        while (dvd >= dvs) {
            long long temp = dvs, multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            quotient += multiple;
        }

        return sign * quotient;
    }
};

int main() {
    Solution sol;
    std::cout << sol.divide(10, 3) << std::endl;  // Output: 3
    std::cout << sol.divide(7, -3) << std::endl;  // Output: -2
    return 0;
}
