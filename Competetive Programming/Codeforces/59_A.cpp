#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int l = 0, u = 0;
    for (char c : s)
    {
        if (islower(c))
            l++;
        else
            u++;
    }
    if (l < u)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s;
    return 0;
}