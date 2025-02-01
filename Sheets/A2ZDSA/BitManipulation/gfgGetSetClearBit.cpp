#include <iostream>
#include <vector>
using namespace std;

void bitOperationsNaive(unsigned int num, int i) {
    // Convert number to binary representation
    vector<int> binary(32, 0);
    unsigned int temp = num;
    int index = 0;
    
    while (temp > 0) {
        binary[index++] = temp % 2;
        temp /= 2;
    }

    // Get ith bit (1-based index)
    int getBit = (i <= 32) ? binary[i - 1] : 0;

    // Set ith bit (make it 1)
    if (i <= 32) binary[i - 1] = 1;
    unsigned int setBit = 0;
    for (int j = 31; j >= 0; j--) {
        setBit = setBit * 2 + binary[j];
    }

    // Clear ith bit (make it 0)
    if (i <= 32) binary[i - 1] = 0;
    unsigned int clearBit = 0;
    for (int j = 31; j >= 0; j--) {
        clearBit = clearBit * 2 + binary[j];
    }

    cout << getBit << " " << setBit << " " << clearBit;
}

int main() {
    unsigned int num;
    int i;
    cin >> num >> i;
    bitOperationsNaive(num, i);
    return 0;
}
