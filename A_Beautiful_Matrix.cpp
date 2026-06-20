#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int binary_arr[5][5];
    int indic[2];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> binary_arr[i][j];
            if (binary_arr[i][j] == 1)
            {
                indic[0] = i;
                indic[1] = j;
            }
        }
    }
    cout << abs(indic[0] - 2) + abs(indic[1] - 2) << "\n";

    return 0;
}