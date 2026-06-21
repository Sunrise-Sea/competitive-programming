#include <bits/stdc++.h>
#define ll long long
void solve(){
    
}
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int candies[n];
        for (int i = 0; i < n; i++)
        {
            cin >> candies[i];
        }
        sort(candies, candies + n);
        if (n == 1)
        {
            if (candies[0] > 1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
        else
        {
            if (candies[n - 1] - candies[n - 2] > 1)
                cout << "NO" << "\n";
            else
                cout << "YES" << "\n";
        }
    }

    return 0;
}