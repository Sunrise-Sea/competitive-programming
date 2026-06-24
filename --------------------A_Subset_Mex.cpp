#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n+1];
        int cnt[101];
        memset(cnt,0,sizeof(cnt));
        for (int j = 1; j <= n; j++)
        {
            cin>>arr[j];
            cnt[arr[j]]++;
        }
        int mexa=0;
        int mexb=0;
        while (cnt[mexa]>=1)
        {
            mexa++;
        }
        while (cnt[mexb]>=2)
        {
            mexb++;
        }
        cout<<mexa+mexb<<"\n";
        
        
        
    }
    
    
    return 0;
}