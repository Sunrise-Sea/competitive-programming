#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, k;
    cin >> a >> b >> k;
    int j = 1, kth_no;
    for (int i = gcd(a, b); i >= 1; i--)
    {
        if (gcd(a, b) % i == 0 && j <= k)
        {
            kth_no = i;
            j++;
        }
    }
    cout<<kth_no<<"\n";

    return 0;
}