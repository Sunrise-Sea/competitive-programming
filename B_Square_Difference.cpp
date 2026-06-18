#include <bits/stdc++.h>
#define ll long long

using namespace std;
int prime_check(ll number)
{
    for (ll j = 2; j <= (ll)ceil(sqrt(number)); j++)
    {
        if (number % j == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll ab[2];
    int t;
    cin >> t;
    int isprime = 1;
    ll difference = 0;
    ll sum = 0;
    for (int i = 0; i < t; i++)
    {

        for (int y = 0; y < 2; y++)
        {
            cin >> ab[y];
        }
        isprime = 1;
        difference = ab[0] - ab[1];
        sum = ab[0] + ab[1];
        /*         for (ll k = 2; k <= (ll)ceil(sqrt(sum)); k++)
                {
                    if (sum % k == 0)
                    {
                        isprime = 0;
                        break;
                    }
                } */
        if (sum > 1 && difference > 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            isprime = prime_check(sum) && prime_check(difference);
            if (isprime == 1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }
    /*     for (int i = 0; i < t; i++) {
            for (int y = 0; y < 2; y++)
            {
                cin >> ab[y];
            }
            difference = ab[0] - ab[1];
            if (difference != 1)
            {
            }
        } */

    return 0;
}