#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>s;
        cout<<(int)s[0]+(int)s[2]-96<<"\n";
    }
    

    return 0;
}