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
    int arrows[5][2], sum = 0;
    memset(arrows, 0, sizeof(arrows));
    for (int i = 0; i < 5; i++)
    {
        arrows[i][0] = i + 1;
    }

    while (t--)
    {
        for (int i = 0; i < 5; i++)
        {
            arrows[i][1] = 0;
        }
        sum = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> aims[i][j];
                for (int l = 0; l < 5; l++)
                {
                    if (((i == l || i == 10 - l) || (j == l || j == 10 - l)) && aims[i][j] == 'X')
                    {
                        arrows[l][1]++;
                    }
                }

                // i = 0 or j=0 then arrows 1 mark ++
            }
        }
        for (int i = 0; i < 5; i++)
        {
            sum += (arrows[i][1] * arrows[i][0]);
        }
        cout<<sum<<"\n";
    }

    return 0;
}