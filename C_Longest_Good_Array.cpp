#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        int the_num = (int)sqrt(2 * (r - l));
        if (l - r)
            cout << (the_num * (the_num + 1) <= 2*(r - l) ? the_num+1 : the_num) << "\n";
        else
            cout << 1 << "\n";
    }
//solved
    return 0;
}