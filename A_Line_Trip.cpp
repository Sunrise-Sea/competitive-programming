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
        } // i literally forgot you have to travel back again
        biggest_diff = gas_stations[0];
        for (int j = 0; j < n - 1; j++)
        {
            if (biggest_diff < gas_stations[j + 1] - gas_stations[j])
            {
                biggest_diff = gas_stations[j + 1] - gas_stations[j];
            }
            if (biggest_diff < 2 * (x - gas_stations[n-1])) // from one gas station to the end then to the last gas station so you refil again hence.....
            // oh you don't have to subtract 1 5 --> 6 (1 unit) 6-->7 (1 unit) 7-->6(1unit) 6-->5(1 unit) hence 4 units
            // second case hence 5-->6(1 unit) 6-->5(1unit)
            {
                biggest_diff = 2 * (x - gas_stations[n-1]);
            }
        }
        // cout<<gas_stations[n-1]<<"\n";// i literally had n in the index wow
        cout << biggest_diff << "\n";
    }

    return 0;
}