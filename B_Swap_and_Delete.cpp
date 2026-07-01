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
        cin >> st;
        // vector<int> st(n);
        // for (int i = 0; i < n; i++)
        // {
        //     cin >> st[i];
        //     zeroes += (int)(st[i] == 0);
        // }// it didn't ask for n
        for (int i = 0; i < (int)st.length(); i++)
        {
            zeroes += (int)(st[i] == '0');
        }
        ones = (int)st.length() - zeroes;
        if (zeroes == ones)
        {
            cout << 0 << "\n";
        }
        else
        {
            cout << abs((int)st.length() - (2 * zeroes)) << "\n";
            if (ones > zeroes)
            {
                ones_after = ones - (abs((int)st.length() - (2 * zeroes)));
            }
            else
            {
                zeroes_after = zeroes - (abs((int)st.length() - (2 * zeroes)));
            }
        }
        //    cout<<zeroes<<"\n";

        // we need equal number of 1's and 0's to swap it to opposite places so that none equals the former
        // since swapping does not have any costs
    }

    return 0;
}