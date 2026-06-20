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
    int total_digits = 0;
    int flag_compl = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        flag_compl=0;
        total_digits = (int)(ceil(log10(n)));
        for (int i = 0; i < total_digits; i++)
        {
            if (i == 0 && return_digit(n, i) != 9)
            {
                flag_compl++;
            }
            else if (i == total_digits - 1 && return_digit(n, i) == 1)
            {
                flag_compl++;
            }
            else if (i > 0 && i < total_digits - 1 && return_digit(n, i) != 0)
            {
                flag_compl++;
            }
            else
            {
                break;
            }

            // cout << return_digit(n, i) << "\n";
        }
        // cout << total_digits << "  ";
        // cout << flag_compl << "  ";
        // if (flag_compl == n)
        if (flag_compl == total_digits)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}