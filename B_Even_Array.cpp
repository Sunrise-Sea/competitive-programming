#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll int n;
    ll int t;
    cin >> t;
    ll int even_dis = 0;
    ll int odd_dis = 0;
    for (int j = 0; j < t; j++)
    {
        even_dis = 0;
        odd_dis = 0;
        cin >> n;
        ll int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != i % 2)
            {
                if (i % 2 == 0)
                {
                    even_dis++;
                }
                else if (i % 2 == 1)
                {
                    odd_dis++;
                }
            }
        }
        // cout << odd_dis << "\n";
        // cout << even_dis << "\n";
        if (odd_dis == 0 && even_dis == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if (odd_dis == even_dis && odd_dis != 0)
            {
                cout << odd_dis << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}