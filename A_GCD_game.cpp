#include <bits/stdc++.h>
#define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n; // logic because we have to choose a number and it's always going to be less than a-b because subtraction in gcd
        cout << (int)(n / 2) << "\n";
    }

    return 0;
}