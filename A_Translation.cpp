#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string berland, birland;
    // string correct_trans = berland;
    cin >> berland >> birland;
    string correct_trans = berland;
/*     for (int i = 0; i < (int)berland.size(); i++)
    {
        correct_trans[i] = berland[i];
    } */

    // cout<<sizeof(berland.size());
    for (int i = 0; i < (int)berland.size(); i++)
    {
        correct_trans[(int)berland.size() - i-1] = berland[i];
    }
    if (birland==correct_trans)
    {
        cout<<"YES"<<"\n";
    }
    else
    {
        cout<<"NO"<<"\n";
    }
    
    

    return 0;
}