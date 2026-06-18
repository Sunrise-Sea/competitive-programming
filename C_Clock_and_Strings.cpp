#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{

    short int t;
    cin >> t;
    short int a, b, c, d;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c >> d;
        if (minmax(a, b).second < minmax(c, d).second && (minmax(c, d).first < minmax(a, b).second && minmax(c, d).first > minmax(a, b).first))
        {
            cout << "YES" << endl;
        }
        else if ((minmax(c, d).second < minmax(a, b).second && minmax(c, d).second > minmax(a, b).first) && (minmax(c, d).first < minmax(a, b).first))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}