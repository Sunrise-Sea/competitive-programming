#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,K,flag=0;
    cin>>t;
    // subsegment can be of 1 length
    for (int i = 0; i < t; i++)
    {
        cin>>n>>K;
        flag=0;
        int numbers[n];
        for (int j = 0; j < n; j++)
        {
            cin>>numbers[j];
        }
        for (int k = 0; k < n; k++)
        {
            if (numbers[k]==K)
            {
                flag=1;
                break;
            }
        }
        if (flag)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
        
        
    }
    
    
    return 0;
}