#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;
    // cin >> t;
    // for (int i = 0; i < t; i++)
    // {
    string s, x;
    cin >> x >> s;
    // cout<<s.rfind("hel"); // very useful find -attribute --> Emerald Alert!
    int indic_x = 0;
    int indic_s = 0;
    while (indic_x < (int)x.size() && indic_s < (int)s.size())
    {
        if (s[indic_s] == x[indic_x])
        {
            s[indic_s] = '-';
            indic_s++;
        }
        // if (indic_s!=0)
        // {
        // }

        indic_x++;
    }
    cout << indic_s << "\n";
    cout << indic_x << "\n";
    cout << s << "\n";
    cout << x << "\n";
    // }
// 

    return 0;
}