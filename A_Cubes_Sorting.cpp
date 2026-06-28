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
        int hello[n], flag = 0;
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
        for (int i = 0; i < n; i++)
        {
            if (temporary[n - 1 - i] == hello[i])
            {
            flag++;
            }
            
        }

        // if (temporary == hello)
        if (flag==n)
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