#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll int diff[n];
    for (int i = 0; i < n; i++)
    {
        cin>>diff[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+diff[i];
    }
    if (sum==0)
    {
        cout<<"EASY";
    }
    else
    {
        cout<<"HARD";
    }
    
    return 0;
}