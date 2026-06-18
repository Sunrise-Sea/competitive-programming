#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    /*     for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << j + 1;
            }
            cout << endl;
        } */
    int sumNum[n * (n + 1) / 2];
    for (int i = 0; i < n * (n + 1) / 2; i++)
    {
        sumNum[i] = i + 1;
    }
/*     for (int i = 0; i < n * (n + 1) / 2; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (sumNum[i]==(j*(j+1)/2))
            {
                cout<<endl;
            }
        }
    } */
    for (int i = 0; i < n; i++)
    {
        
        if (i%2==1)
        {
            for (int j = 0; j <= i; j++)
            {
                cout<<sumNum[(i*(i+1)/2)+j]<<" ";
            }
            
        }
        else
        {
            for (int j = i; j >= 0; j--)
            {
                cout<<sumNum[(i*(i+1)/2)+j]<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}