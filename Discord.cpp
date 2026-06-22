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
    int people_besides[n][n];
    memset(people_besides, -1, sizeof(people_besides));
    for (int i = 0; i < n; i++)
    {
        people_besides[i][0] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << people_besides[i][j] << " ";
        }
        cout << "\n";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (condition)
            {
                /* code */
            }
            
        }
        
    }
    

    return 0;
}