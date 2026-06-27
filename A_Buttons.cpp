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
            if (c%2==0)// and this will determine who gets the last turn in case both are equal because a+b is already but we want to know c
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