#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, max = 0, min = INT_MAX, maxes = 0;
    cin >> t;
    while (t--)
    {
        // we can just put all the biggest numbers (all the multiple instances of max numbers to c and the rest in b)
        // since any solution is accepted
        cin >> n;
        max = 0, min = INT_MAX, maxes = 0;
        int unite_us[n];
        for (int i = 0; i < n; i++)
        {
            cin >> unite_us[i];
            max < unite_us[i] ? max = unite_us[i] : 0;
            min > unite_us[i] ? min = unite_us[i] : 0;
        }
        for (int i = 0; i < n; i++)// another fix by ai
        {
            if (unite_us[i] == max)
                maxes++;
        }
        // if (max == min)
        if (maxes == n)// another fix by ai
        {
            // cout << "-1";
            cout << -1;// another fix by ai
        }
        else
        {
            // for (int i = 0; i < n; i++)
            // {
            //     if (unite_us[i] == max)
            //         maxes++;
            // }
            cout << n - maxes << " " << maxes << "\n";
            for (int i = 0; i < n; i++)
            {
                if (unite_us[i] != max)
                    (cout << unite_us[i] << " ");
            }
            cout << "\n";
            for (int i = 0; i < n; i++)
            {
                if (unite_us[i] == max)
                    (cout << unite_us[i] << " ");
            }
        }
        cout << "\n";
    }
    // solved
    return 0;
}