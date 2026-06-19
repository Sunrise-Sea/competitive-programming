#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n,sum= 0, temp_sum, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            temp_sum = (int)(n/i)*((int)(n/i)+1)*i/2;
            if (temp_sum>sum)
            {
                x = i;
                sum = temp_sum;
            }
            
        }
        cout<<x<<"\n";
        
    }

    return 0;
}