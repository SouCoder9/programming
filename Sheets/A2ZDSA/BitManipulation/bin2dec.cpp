#include <iostream>
using namespace std;

int main()
{
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;
    int n = binary.length();
    int decimal = 0;
    int power = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
        {
            decimal += power;
        }
        power = power * 2;
    }
    cout << decimal << endl;

    return 0;
}