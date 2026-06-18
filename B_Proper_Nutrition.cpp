#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, n, flag = 0;
    int x = 0, y = 0;
    cin >> n >> a >> b;
    if (n % a == 0)
    {
        cout << "YES" << "\n";
        cout << n / a << " " << 0 << "\n";
    }
    else if (n % b == 0)
    {
        cout << "YES" << "\n";
        cout << 0 << " " << n / b << "\n";
    }
    else
    {
        for (int i = 1; i < n / a; i++)
        {
            if ((n - a * i) % b == 0)
            {
                x = i;
                y = (n - a * i) / b;
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << "\n";
            cout << x << " " << y << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}