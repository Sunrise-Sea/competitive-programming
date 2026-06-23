#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, m;
    string x, s;
    int sus = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        sus = 0;
        cin >> n >> m >> x >> s;
        while (x.rfind(s) == ULLONG_MAX)
        {
            x.append(x);
            // cout<<x <<"\n";
            sus++;
            if ((int)x.size() > (int)pow(10,2))
            {
                n = -1;
                cout << "-1" << "\n";
                break;
            }
        }
        if (n != -1)
        {
            cout << sus << "\n";
        }
    }

    return 0;
}