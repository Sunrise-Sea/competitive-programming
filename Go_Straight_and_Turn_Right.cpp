#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll int n;
    string t;
    int x = 0, y = 0;
    cin >> n >> t;
    int direction = 1;
    // easy =1, south = 2, west = 3, north = 4
    for (int i = 0; i < n; i++)
    {
        if (t[i] == 'S')
        {
            if (direction % 4 == 1)
            {
                x++;
            }
            else if (direction % 4 == 2)
            {
                y--;
            }
            else if (direction % 4 == 3)
            {
                x--;
            }
            else if (direction % 4 == 0)
            {
                y++;
            }
        }
        else if (t[i] == 'R')
        {
            direction++;
        }
    }
    cout << x << " " << y << "\n";

    return 0;
}