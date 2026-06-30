#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int ops = 0;
        ops += (b == 1 && a!=1);

        while ((int)(a / b) != 0)
        {
            if ((int)(log(a) / log(b)) > (int)(log(a) / log(b + 1)) + ops) // check to see
            {
                b++;
                a = (int)(a / b);
                ops += 2;
                cout << a << "  --" << "\n";
            }
            else
            {
                a = (int)(a / b);
                ops += 1;
                cout << a << "  -" << "\n";
            }
        }
        cout << ops + 1 << "\n";
    }

    return 0;
}