#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
       for (int k = n-i-1; k >= 0; k--)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    for (int i = n; i >= 0; i--)
    {
       for (int k = n-i-1; k >= 0; k--)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        if (i!=1)//was adding an extra new line char in there hence it wasn't being accepted
        {
            cout<<endl;
        }
        
    }
    return 0;
}