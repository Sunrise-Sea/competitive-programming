#include <bits/stdc++.h>
#define ll long long
#define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        int mins = INT_MAX;
        int maxes = 0;
        int sum = 0;
        cin >> n;
        ll candies[n];
        Loop(i, 0, n)
        {
            cin >> candies[i];
            sum += candies[i];
            if (mins > candies[i])
                mins = candies[i];
            if (maxes < candies[i])
                maxes = candies[i];
        }
        cout << (maxes == mins ? 0 : sum - n * mins) << "\n";
    }
    //solved

    return 0;
}