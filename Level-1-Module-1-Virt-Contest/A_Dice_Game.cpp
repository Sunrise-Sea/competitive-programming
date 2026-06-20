#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int priyansh= 0, priyam=0;

    for (int i = 1; i <= 6; i++)
    {
        if (abs(a - i) > abs(b - i))
        {
            priyam++;
        }
        else if (abs(a - i) < abs(b - i))
        {
            priyansh++;
        }
    }
    cout << priyansh << " " << 6 - priyam - priyansh << " " << priyam << "\n";

    return 0;
}