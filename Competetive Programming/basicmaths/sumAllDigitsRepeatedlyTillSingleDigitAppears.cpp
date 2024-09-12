#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int singleDigitSum(int n) {
    while (n >= 10) {
        n = sumOfDigits(n);
    }
    return n;
}

int main() {
    int number;
    
    std::cout << "Enter an integer: ";
    std::cin >> number;
    
    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1;  // Return with an error code
    }
    
    int result = singleDigitSum(number);
    
    std::cout << "The single digit sum of the digits is: " << result << std::endl;
    
    return 0;
}
