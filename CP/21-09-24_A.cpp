#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int r1 = 0;
        int r2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= k)
            {
                r1 = r1 + a[i];
            }
            if (a[i] == 0 && r1 > 0)
            {
                --r1;
                ++r2;
            }
        }

        cout << r2 << endl;
    }

    return 0;
}
