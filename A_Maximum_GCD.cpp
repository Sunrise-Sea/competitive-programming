#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    // int gcd_m = 1;
    // int temporary_gcd = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        /* for (int j = 2; j <= (int)ceil(sqrt(n)); j++)
        {
            for (int k = 2; k <= (int)ceil(sqrt(n)); k++)
            {
                if (n % j == 0 && n % k == 0 && temporary_gcd >= gcd_m)
                {
                    temporary_gcd = gcd(n / j, n / k);
                    gcd_m = temporary_gcd;
                }
            }
        }
        cout << gcd_m << "\n"; */
    }

    return 0;
}