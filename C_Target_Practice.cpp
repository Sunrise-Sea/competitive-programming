#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    char aims[10][10];
    int arrows = 0, misses = 0;
    while (t--)
    {
        arrows = 0, misses = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> aims[i][j];
                aims[i][j] == 'X' ? arrows++ : misses++;
            }
        }
    }

    return 0;
}