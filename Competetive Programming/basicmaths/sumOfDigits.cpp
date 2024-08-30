#include <stdio.h>

int main() {
    int sum = 0;
    int n;

    // Read input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Loop until all digits have been processed
    while (n != 0) {
        int lastDigit = n % 10;
        sum += lastDigit; // Use += operator for concise addition
        n /= 10; // Use /= operator for concise division
    }

    // Print the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}