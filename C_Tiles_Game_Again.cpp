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
            cin >> space_ints[j];
        }

        longest_streak = 0;
        temp_streak = 0;
        if (n == 1)
        {
            if (space_ints[0] == 0)
            {
                longest_streak = 1;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (space_ints[i] == 0)
                {
                    temp_streak++;
                    if (i == n - 1 && longest_streak < temp_streak)
                    {
                        longest_streak = temp_streak;
                        temp_streak = 0;
                    } // this was added as a measure to encounter the edge case where the ending is 0 and the loop doesn't check the conditions again
                }
                // else if (space_ints[i] == 1)
                // {
                /*                 else if (longest_streak <= temp_streak) //< to <=
                                {
                                    longest_streak = temp_streak;
                                    temp_streak = 0;
                                } */
                else if (space_ints[i] == 1)
                {
                    if (longest_streak <= temp_streak) //< to <=
                    {
                        longest_streak = temp_streak;
                    }
                    temp_streak = 0;
                }

                // }
            }
        }

        cout << longest_streak << "\n";
    }

    return 0;
}