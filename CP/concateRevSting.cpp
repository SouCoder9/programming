#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    string s3 = s1 + s2;
    cout << s3 << endl;
    int n = s3.length();
    for (int i = n - 1; i >= 0; i--)
    {
        cout << s3[i];
    }
    cout << endl;
    return 0;
}