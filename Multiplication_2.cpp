#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll multi_2[n];
    ll product = 1;
    int break_flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> multi_2[i];
    }
    ll min = multi_2[0];
    for (int q = 0; q < n; q++)
    {
        if (min >= multi_2[q])
        {
            min = multi_2[q];
        }
    }
    if (min == 0)
    {
        cout << 0 << "\n";
    }

    else
    {
        for (int j = 0; j < n; j++)
        {
            product *= multi_2[j];
            if (product*=multi_2[j] > (ll)pow(10, 18))
            {
                cout << -1 << "\n";
                break_flag = 1;
                break;
            }
        }
        if (!break_flag)
        {
            cout << product << "\n";
        }
    }

    return 0;
}