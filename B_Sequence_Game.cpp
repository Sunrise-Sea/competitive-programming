#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,new_n=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sequence[n];
        // int out_seq[2*n];
        // memset(out_seq,0,sizeof(out_seq));
        for (int i = 0; i < n; i++)
        {
            cin>>sequence[i];
        }
        new_n=n;
        for (int j = 0; j < n-1; j++)
        {
            if (sequence[j]>sequence[j+1])
            {
                new_n++;
            }
        }

        cout<<new_n<<"\n";// dont increment n it'll lead to garbage values
        cout<<sequence[0]<<" ";
        for (int j = 0; j < n-1; j++)
        {
            if (sequence[j+1]>=sequence[j])
            {
                cout<<sequence[j+1]<<" ";
            }
            else
            {
                cout<<sequence[j+1]<<" ";
                cout<<sequence[j+1]<<" ";
            }
        }
        cout<<"\n";//solved
        

        
    }
    
    
    return 0;
}