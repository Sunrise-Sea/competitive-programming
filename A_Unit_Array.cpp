#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, ones = 0, minus_ones = 0, moves = 0;
    cin >> t;
    while (t--)
    {
        ones = 0, minus_ones = 0, moves = 0;
        ;
        cin >> n;
        int unit_arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> unit_arr[i];
            unit_arr[i] == 1 ? ones++ : minus_ones++;
        }
        while (minus_ones % 2 != 0 || ones < minus_ones)// using NOT of (minus_ones%2==0 && ones>=minus_ones)
        {
            moves++;
            ones++;
            minus_ones--;
        }
        cout<<moves<<"\n";
    }

    return 0;
}