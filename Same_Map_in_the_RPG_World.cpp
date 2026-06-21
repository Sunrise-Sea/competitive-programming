#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int H, W, hash_a= 0, hash_b=0, dot_a=0, dot_b=0;
    cin >> H >> W;
    char matrix_a[H][W];
    char matrix_b[H][W];
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> matrix_a[i][j];
            if (matrix_a[i][j]=='#')
            {
                hash_a++;
            }
            else
            {
                dot_a++;
            }
            
            
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> matrix_b[i][j];
            if (matrix_b[i][j]=='#')
            {
                hash_b++;
            }
            else
            {
                dot_b++;
            }
        }
    }
    // we can move in any direction we want using carrying out the that one operation n times + some which will resemble the reverse of that original operation
    // check to see if it's even true
    if (hash_a==hash_b&&dot_a==dot_b)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
    
    

    return 0;
}