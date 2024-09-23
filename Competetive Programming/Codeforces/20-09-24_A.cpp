#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x, y;
        cin >> x >> y;
        int m = min(x, y);

        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        int sec = (n + m - 1) / m;
        cout << sec << endl;
    }
    return 0;
}
