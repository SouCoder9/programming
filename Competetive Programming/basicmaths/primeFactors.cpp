#include<bits/stdc++.h>
void printPrimeFactors(int n) {
    while (n % 2 == 0) {
        std::cout << 2 << " ";
        n /= 2;
    }
  
    for (int i = 3; i <= std::sqrt(n); i += 2) {
        while (n % i == 0) {
            std::cout << i << " ";
            n /= i;
        }
    }
    if (n > 2) {
        std::cout << n << " ";
    }
}

int main() {
    int n;
    
    std::cout << "Enter an integer: ";
    std::cin >> n;
    
    if (n <= 1) {
        std::cout << "There are no prime factors for numbers less than or equal to 1." << std::endl;
    } else {
        std::cout << "Prime factors of " << n << " are: ";
        printPrimeFactors(n);
        std::cout << std::endl;
    }
    
    return 0;
}
