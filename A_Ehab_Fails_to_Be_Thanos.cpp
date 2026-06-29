#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,flag =0;
    cin>>n;
    // while(t--)
    // {
        
    // }
    int yolo[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>yolo[i];
    }
    // if there is no permutable way it can have half elements sum != the other half then all must be equal
    for (int j = 0; j < (2*n)-1; j++)
    {
        if (yolo[j]==yolo[j+1])
        {
            flag++;
        }
    }
    if (flag==(2*n)-1)
    {
        cout<<-1<<"\n";
    }
    else
    {
        sort(yolo,yolo+2*n);//since we have to juggle/move around elements anyway why not just sort it and have the sum be OBVIOUSLY unequal if the elements are unequal themselves   
        for (int i = 0; i < 2*n; i++)
        {
            cout<<yolo[i]<<" ";
        }
        
    }
    
    
    
    
    
    
    return 0;
}