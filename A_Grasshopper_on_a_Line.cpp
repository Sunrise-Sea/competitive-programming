#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, k, x;
    cin >> t;
    while (t--)
    {
        cin >> x >> k;
        if (x % k != 0)
        {
            cout << "1\n"
                 << x << "\n";
        }
        else
        {
            cout << "2\n"
                 << "1" << " " << x - 1 << "\n";
        }
    }// solved

    return 0;
}