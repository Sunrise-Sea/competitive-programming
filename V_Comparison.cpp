#include <bits/stdc++.h>

using namespace std;

int main()
{
    short int A,B;
    char c;
    cin>>A>>c>>B;
    if (A>B && c=='>')
    {
        cout<<"Right";
    }

    else if (A<B && c=='<')
    {
        cout<<"Right";
    }
    
    else if (A==B && c=='=')
    {
        cout<<"Right";
    }
    else
    {
        cout<<"Wrong";
    }
    
    return 0;
}
