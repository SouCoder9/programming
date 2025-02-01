#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for(int l = 0; l < 2*i+1; l++)
        {
            cout << "*";
        }
        for(int k = 0; i < n-k-1; k++)
        {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
