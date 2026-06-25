#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (d - b >= 0 && (a + (d - b)) >= c)
        {
            cout << 2*(d - b) + (a - c) << "\n";//using simple logic of whether i'd be able to traverse to my destined point
            //first reach the y coord since that is only incremented (check for the positive condition since we want increments) and then check for whether it is possible to only decrement x and reach the point
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        
        
    }

    return 0;
}