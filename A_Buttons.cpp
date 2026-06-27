#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        if (a>b)// no matter what b will finish first
        {
            cout<<"First"<<"\n";
        }
        else if (a==b)
        {
            if (c%2==0)
            {
                cout<<"Second"<<"\n";
            }
            else
            {
                cout<<"First"<<"\n";
            }
            
            
        }
        else
        {
            cout<<"Second"<<"\n";
        }
        
        
        
    }

    return 0;
}