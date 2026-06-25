#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, x, flag = 0, elements = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> x;
        flag = 0, elements = 0;
        for (int i = k; i > 0; i--)
        {
            if (i == x)
            {
                continue;
            }
            else
            {
                if (n % i != x)
                {
                    flag = 1;
                    cout << "YES" << "\n";
                    elements = (int)n / i;
                    n % i != 0 ? elements++ : elements = (int)n / i;
                    cout<<elements<<"\n";
                    for (int j = 0; j < (int)n/i; j++)
                    {
                        cout << (int)i << " ";
                    }
                    n % i != 0 ? cout << n % i << "\n" : cout << "\n";
                    break;
                }
            }
        }
        if (!flag)
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}