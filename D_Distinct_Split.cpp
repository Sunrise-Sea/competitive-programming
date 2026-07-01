#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    int n;
    string nine;
    cin >> t;
    while (t--)
    {
        cin >> n >> nine;
        int distinct_1 = 0, distinct_2 = 0;
        int maximus = 0;
        int letters_count[26][2]; // 97-122
        // memset(letters_count, 0, sizeof(letters_count));
        // for (int j = 0; j < 26; j++)
        // {
        //     letters_count[j][0] = 97 + j;
        // }

        // let's precompute stuff;
        for (int i = 0; i < n; i++)
        {
        memset(letters_count, 0, sizeof(letters_count));
        // i am so stupid bro, i literally forgot to set it to 0 again
            distinct_1 = 0, distinct_2 = 0;
            for (int j = 0; j < i; j++)
            {
                letters_count[nine[j] - 97][0]++; // since all are small letters anyways 
                // i am such a stupid ahh i literally had this on i instead of j i am so stupid shi
            }
            for (int j = i ; j < n; j++)// forgot to include i
            {
                letters_count[nine[j] - 97][1]++; // since all are small letters anyways
            }
            /*             for (int l = 0; l < 26; l++)
                        {

                        } */
            // figured I could just convert that character into integer itself
            for (int u = 0; u < 26; u++)
            {
                // cout << (char)(i + 97) << " " << letters_count[i][0] << "\n";
                // check add for all letters
                if (letters_count[u][0] > 0)
                {
                    distinct_1++;
                }
                if (letters_count[u][1] > 0)
                {
                    distinct_2++;
                }
            }
            if (distinct_1 + distinct_2 > maximus)
            {
                maximus = distinct_1 + distinct_2;
            }
        }
        cout << maximus << "\n";
    }

    return 0;
}