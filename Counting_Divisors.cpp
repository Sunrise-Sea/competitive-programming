#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x, divisors;
    cin >> n;
    divisors = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        divisors = 1;
        for (int i = 2; i <= (int)floor(sqrt(x)); i++)
        {
            if (x % i == 0)
            {
                divisors++;
            }
        }
        if (x == (int)sqrt(x) * (int)sqrt(x))
        {
            cout << 2 * divisors -1<< "\n";
        }
        else
        {
            cout << 2 * divisors<< "\n";
        }
        
    }

    return 0;
}