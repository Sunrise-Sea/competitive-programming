#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // anything other than 2^m --> odd hence log base 2 of that is integer
    int t;
    ll n; // n was until 10^14 which also indicates that this needed to be a O(constant)
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        if ((double)floor(log2(n)) == log2(n))
        {
            cout<<"NO"<<"\n";
        }
        else
        {
            cout<<"YES"<<"\n";
        }
        
    }

    return 0;
}