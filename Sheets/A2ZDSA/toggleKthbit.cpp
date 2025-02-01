#include <iostream>
using namespace std;

int toggleKthBit(int n, int k)
{
    return n ^ (1 << (k - 1));
}

int main()
{
    int n, k;
    cout << "Enter number: ";
    cin >> n;
    cout << "Enter bit position to toggle: ";
    cin >> k;
    int result = toggleKthBit(n, k);
    cout << "Number after toggling " << k << "th bit: " << result << endl;

    return 0;
}
