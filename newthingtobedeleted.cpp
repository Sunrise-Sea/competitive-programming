#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if (n%x==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    
    
    return 0;
}