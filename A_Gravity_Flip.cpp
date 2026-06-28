#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int gravitas[t];
    for (int i = 0; i < t; i++)
    {
        cin >> gravitas[i];
    }
    sort(gravitas, gravitas + t);
    for (int i = 0; i < t; i++)
    {
        cout << gravitas[i]<<" ";
    }
    // biggest height goes the most bottom part
    //solved

    return 0;
}