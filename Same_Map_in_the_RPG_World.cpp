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
        }
    }
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            cin >> matrix_b[i][j];
        }
    }

    return 0;
}