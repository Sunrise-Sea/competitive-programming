#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, x, biggest_diff = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        biggest_diff = 0;
        int gas_stations[n];
        for (int i = 0; i < n; i++)
        {
            cin >> gas_stations[i]; // take the biggest difference between two gas stations and everything else will be covered
        }
        biggest_diff = gas_stations[0];
        for (int j = 0; j < n - 1; j++)
        {
            if (biggest_diff < gas_stations[j + 1] - gas_stations[j])
            {
                biggest_diff = gas_stations[j + 1] - gas_stations[j];
            }
            else if (biggest_diff < x-gas_stations[n])
            {
                biggest_diff = x-gas_stations[n];
            }
        }
        cout << biggest_diff << "\n";
    }

    return 0;
}