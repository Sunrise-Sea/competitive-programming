#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        // we have two options |Ap - Ap+1|+|Bp-Bp+1|
        // or we have |Bp - Ap+1|+|Ap-Bp+1| on swapping the ap and bp review this problem in 14th video
        cin>>n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        for (int i = 0; i < n-1; i++)
        {
            if (1)
            {
                /* code */
            }
            
        }
        
        
        
    }

    return 0;
}