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
        int distinct_1 = 0;
        int distinct_2 = 0;
        int letters_count[26]; // 97-122
        memset(letters_count, 0, sizeof(letters_count));
        for (int j = 0; j < 26; j++)
        {
            letters_count[j] = 97 + j;
        }

        // let's precompute stuff;
        for (int i = 0; i < n; i++)
        {
            // for (int j = 0; j < i; j++)
            // {

            // }
            // for (int j = i+1; j < n; j++)
            // {

            // }
/*             for (int l = 0; l < 26; l++)
            {
                
            } */// figured I could just convert that character into integer itself
            letters_count[nine[i]-97]++;// since all are small letters anyways
        }
        
    }

    return 0;
}