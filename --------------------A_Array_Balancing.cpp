#include <bits/stdc++.h>
#define ll long long

using namespace std;
// exploring all the possibilities of a solution
// not greedy
// but after doing all that if you choose one possibility (some best case for example) then that is 'greedy'
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    ll sum=0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // we have two options |Ap - Ap+1|+|Bp-Bp+1|
        // or we have |Bp - Ap+1|+|Ap-Bp+1| on swapping the ap and bp review this problem in 14th video
        cin>>n;
        sum=0;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin>>b[j];
        }
        for (int i = 0; i < n-1; i++)
        {
            if (abs(a[i]-a[i+1])+abs(b[i]-b[i+1])>abs(b[i]-a[i+1])+abs(a[i]-b[i+1]))
            {
                swap(a[i+1],b[i+1]);
            }
            
        }
        
        for (int i = 0; i < n-1; i++)
        {
            sum+=abs(a[i]-a[i+1])+abs(b[i]-b[i+1]);
        }
        cout<<sum<<"\n";
        
    }

    return 0;
}