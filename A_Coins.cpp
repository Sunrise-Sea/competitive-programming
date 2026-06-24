#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        if (n%2==0)
        {
            cout<<"YES"<<"\n";
        }
        else if (k%2==1)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
            
        }
        
        
        
    }

    return 0;
}