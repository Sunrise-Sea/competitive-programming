#include <bits/stdc++.h>
#define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    // if n(n-1)/2 operations then that means array is fully reversed
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        // vector<int> hello(n);
        int hello[n], flag = 0,no_equal_elemes=1;
        for (int i = 0; i < n; i++)
        {
            cin >> hello[i];
        }
        // vector<int> temporary(n) ;
        int temporary[n];
        for (int i = 0; i < n; i++)
        {
            temporary[i] = hello[i];
        }
        sort(temporary, temporary + n);
        for (int l = 0; l < n-1; l++)
        {
            if (temporary[l]==temporary[l+1])
            {
                no_equal_elemes = 0;
            }
            
        }// if equal elements less amount of operations requried
        
        if (temporary[0] != temporary[n - 1]&&no_equal_elemes)// taking advantage of the sorted thing so I can see whether the entire elements are equal
        {
            for (int i = 0; i < n; i++)
            {
                if (temporary[n - 1 - i] == hello[i])
                {
                    flag++;
                }
            }
        }

        // if (temporary == hello)
        if (flag == n)
        {
            cout << "NO" << "\n";
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}