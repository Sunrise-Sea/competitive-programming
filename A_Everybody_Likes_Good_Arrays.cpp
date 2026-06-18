#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    /*
    Given : - 1<=n<=100
    a[i] belongs to 1 to 10^9
    */
    int t;
    cin >> t;
    int n;
    int totalOps = 0;
    int counter;
    for (int i = 0; i < t; i++)
    {
        counter = 1;
        cin >> n;
        ll int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] % 2 == a[i + 1] % 2 )
            {
                counter++;
            }
            else
            {
                totalOps += counter - 1;
                counter = 1;
            }
        }
        cout << totalOps << "\n";
    }

    return 0;
}