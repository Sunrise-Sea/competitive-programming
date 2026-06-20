#include <bits/stdc++.h>
#define ll long long

using namespace std;

int return_digit(ll n, ll i_th_power)
{
    return ((n % (ll)pow(10, i_th_power + 1)) - (n % (ll)pow(10, i_th_power))) / (ll)pow(10, i_th_power);
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 0; i < (int)(ceil(log10(n))); i++)
        {
            if (i == 0)
            {
                
            }
            // cout << return_digit(n, i) << "\n";
        }
    }

    return 0;
}