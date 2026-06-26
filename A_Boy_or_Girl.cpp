#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string t;
    int charac =0 ;
    cin>>t;
    
    // if (t.length()%2==0)
    // {
    //     cout<<"CHAT WITH HER!"<<"\n"; 
    // }
    // else
    // {
    //     cout<<"IGNORE HIM!"<<"\n";
    // }
    for (int i = 0; i < t.length(); i++)
    {
        for (int j = i+1; j < t.length(); j++)
        {
            if (t[j] == t[i])
            {
                charac++;// count the equal chars then subtract it from the total
            }
            // else
            // {
            //     t[i]='-';
            // }
        }
        
    }
    // cout<<(t.length()-charac)%2==0? "":""<<"\n"; // just the expression does NOT work you need to enclose the whole thing in brackets
    // cout<<((t.length()-charac)%2==0? "CHAT WITH HER!":"IGNORE HIM!")<<"\n";
    
    cout<<t.length()<<" "<<charac<<"\n"; // just the expression does NOT work you need to enclose the whole thing in brackets

    
    
    return 0;
}