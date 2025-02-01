
#include <iostream>
bool isPowerOfTwo(int n)
{
    return ((n > 0) && ((n & (n - 1)) == 0)) ? true : false;
}

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num))
    {
        cout << num << " is a power of two." << endl;
    }
    else
    {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}