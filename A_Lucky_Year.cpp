#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    /*     ll n;
        int exponent;
        cin >> n;
        ll original = n;
        n++;
        for (int i = 0; i < 9; i++)
        {

            if (n <= pow(10, i + 1) && n >= pow(10, i) && n)
            {
                exponent = i;
                break;
            }
        }
        while (n <= pow(10, 9))
        {
            if (n % (int)pow(10, exponent) == 0)
            {
                cout << n - original << endl;
                break;
            }
            else
            {
                n++;
            }
        } */
    string n;
    cin >> n;
    int digits = n.size();
    ll int original = 0;
    for (int i = 0; i < digits; i++)
    {
        original += ((int)(n[digits-i-1]) - 48) * ((ll int)pow(10, i));
    }

    ll int new_min_y = (((int)(n[0]) - 48) + 1) * (ll int)(pow(10, digits - 1));
    cout<<new_min_y-original;
    return 0;

}