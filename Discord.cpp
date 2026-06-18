#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int photos[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> photos[i][j];
        }
    }

    return 0;
}