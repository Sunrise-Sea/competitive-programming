#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll int N;
    cin>>N;
    ll int A[N];
    ll int B[N];
    for (int i = 0; i < N; i++)
    {
        cin>>A[i];
    }
    for (int i = 0; i < N; i++)
    {
        cin>>B[i];
    }
    int counter=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (A[i]==B[j])
            {
                counter++;
                B[j]=INT_MAX;
                break;
            }
            
        }
        
    }
    if (counter==N)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    
    
    return 0;
}