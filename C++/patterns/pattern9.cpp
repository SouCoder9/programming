#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    int start;
    for (int i = 1; i <= n; i++)
    {
        start = (i % 2 == 0) ? 0 : 1;
        for (int j = 0; j < i; j++)
        {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }

    return 0;
}