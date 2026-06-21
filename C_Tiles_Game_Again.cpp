#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, longest_streak = 0, temp_streak = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int space_ints[n];
        for (int j = 0; j < n; j++)
        {
            cin>>space_ints[j];
        }
        
        longest_streak = 0;
        temp_streak = 0;
        for (int i = 0; i < n; i++)
        {
            if (space_ints[i] == 0)
            {
                temp_streak++;
            }
            else if (space_ints[i] == 1)
            {
                if (longest_streak < temp_streak)
                {
                    longest_streak = temp_streak;
                }
                temp_streak = 0;
            }
        }
        cout << longest_streak << "\n";
    }

    return 0;
}