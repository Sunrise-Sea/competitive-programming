#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k, x,flag=0;
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> x;
        for (int i = n; i > 0; i++)
        {
            if (i == x)
            {
                continue;
            }
            else
            {
                if (n % i != x)
                {
                    flag=1;
                    cout << "YES" << "\n";
                    for (int j = 0; j < i; j++)
                    {
                        cout << (int)n / i << " ";
                    }
                    cout << n % i << "\n";
                    break;
                }
            }
        }
        if (!flag)
        {
            cout<<"NO"<<"\n";
        }
        
    }

    return 0;
}