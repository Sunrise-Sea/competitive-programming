#include <bits/stdc++.h>
#define ll long long
#define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // int t, n;
    int t;
    string st;
    cin >> t;
    while (t--)
    {
        int zeroes = 0, ones = 0;
        int zeroes_after = 0, ones_after = 0;
        int cost_1 = 0;
        int cost_0 = 0;
        cin >> st;
        int n = (int)st.length();
        // vector<int> st(n);
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> st[i];
        //     zeroes += (int)(st[i] == 0);
        // }// it didn't ask for n
        for (int i = 0; i < (int)n; i++)
        {
            zeroes += (int)(st[i] == '0');
        }
        ones = (int)n - zeroes;
        if (zeroes == ones)
        {
            cout << 0 << "\n";
        }
        else
        {
            ones_after = ones;
            zeroes_after = zeroes ;
            // cout << abs((int)n - (2 * zeroes)) << "\n";
            /*             if (ones > zeroes)
                        {
            ones_after = ones - (abs((int)st.length() - (2 * zeroes)));
                        }
                        else
                        {
            zeroes_after = zeroes - (abs((int)st.length() - (2 * zeroes)));
                        } */
            // ok, final idea, since we have to compare from left to right only that means we can just see if we can either have all 1's or all 0's until the position in the modified string, in the original string OR have half 1's and half 0's so that we can swap
            // for (int l = 0; l < n; l--)
            for (int l = n - 1; l >= 0; l--)
            {
                ones_after -= (st[l] == '1');
                zeroes_after -= (st[l] == '0');
                // cost_1+=(st[l] == '1');
                // cost_0+=(st[l] == '0');
                if ((ones ==0 || zeroes == 0 || ones == zeroes)&& (max(ones,zeroes)))
                // if (zeroes == 0)
                {
                    
                }
            }
            cout << cost_1 << "\n";
        }
        //    cout<<zeroes<<"\n";

        // we need equal number of 1's and 0's to swap it to opposite places so that none equals the former
        // since swapping does not have any costs
    }

    return 0;
}