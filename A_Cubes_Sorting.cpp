#include <bits/stdc++.h>
#define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
// since n(n-1)/2 then that means array is fully reversed
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> hello(n);   
        for (int i = 0; i < n; i++)
        {
            cin>>hello[i];
        }
        vector<int> temporary(n) ;
        for (int i = 0; i < n; i++)
        {
           temporary[i]=hello[i];
        }
        sort(temporary.rend(),temporary.rbegin());
        
    }
    
    
    return 0;
}