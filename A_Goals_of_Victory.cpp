#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, sum = 0;
    cin >> t;
    while (t--)
    {
        // using transfer of goals and formula we can determine that the goals are just being transferred from one to another and at the end of the day all leads to 0
        cin >> n;
        int goals[n-1];//only n-1 teams
        sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            cin >> goals[i];
            sum += goals[i];
        }
        cout << -(sum) << "\n";
    }

    return 0;
}