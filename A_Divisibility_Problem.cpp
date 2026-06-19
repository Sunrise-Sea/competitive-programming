#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a % b == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << b - a % b << "\n";
        }
    }

    return 0;
}