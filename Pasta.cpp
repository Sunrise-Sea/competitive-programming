#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int noodle_length[n], planned_length[m];
    int days_done = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>noodle_length[i];
    }
    for (int j = 0; j < m; j++)
    {
        cin>>planned_length[j];
    }
    for (int k = 0; k < m; k++)
    {
        for (int l = 0; l < n; l++)
        {
            if (planned_length[k]==noodle_length[l])
            {
                planned_length[k] = -1;
                noodle_length[l] = -1;
                days_done++;
                break;
            }
            
        }
        
    }
    if (days_done==m)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
    
    
    
    

    return 0;
}