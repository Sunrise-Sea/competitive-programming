#include <bits/stdc++.h>
#define ll long long
// a 128 bit integer also exists though may not be available in all contest systems
// printf is usually a bit faster but also difficult to use (like the %d and %f stuff)
// similar properties for scanf too
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n,x,temp_n;
    cin >> t;
    while (t--)
    {
        // okay so if you add 1 to the initial i and subtract 1 from the remaining the initial and the remaining are in their own still sorted
        //  so choose such that ai and ai+1 get de-sorted in minimum operations
        //  also check whether there is any instance of de-sorting already
        cin >> n;
        // trying vectors for the first time;
        vector<int> v;
        // cout<<v.capacity()<<"\n";
        v.assign(n,0);
        // cout<<v.capacity()<<"\n";
        // cout<<v.at(2)<<"\n";
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        //     v.push_back(v[i]);
        }
        // got this from the book
        // temp_n = n;
        // while (cin>>x && n--)
        // {
        //     cout<<x<<"\n";
        // }
        // for (int i = 0; i < temp_n; i++)
        // {
        //     cout<<v.at(i)<<"\n";
        // }
        

        // cout<<v.capacity();

        // __int128_t sus = __INTMAX_MAX__;
    }

    return 0;
}