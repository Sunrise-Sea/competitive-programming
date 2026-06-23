#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b >> c;
        // while (a+c!=2*b) {
            if (((a+c)/2)%b==0&&(a+c)%2==0)
            {
                cout<<"YES"<<"\n";
            }
            else if ((b+b-a)%c==0&&(b+b-a)>0)
            {
                cout<<"YES"<<"\n";
            }
            else if ((b-(c-b))%a==0&&(b-(c-b))>0)
            {
                cout<<"YES"<<"\n";
            }
            else
            {
                cout<<"NO"<<"\n";
            }
            
            
            
            
        // }
        
    }

    return 0;
}