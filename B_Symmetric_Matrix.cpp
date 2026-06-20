#include <bits/stdc++.h>
#define ll long long

using namespace std;
/* bool is_symmetric(int matrix[])
{
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<matrix[i]<<"\n";
    // }
    if (matrix[1] == matrix[3])
    {
        return 1;
    }
    else
    {
        return 0;
    }

} */
int main()
{

    int t, n, m, flag = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        flag = 0;
        int matrices[n][4];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cin >> matrices[i][j];
            }
        }
        // is_symmetric(matrices[0]);
        if (m % 2 == 1)
        {
            cout << "NO" << "\n";
        }
        else
        {
            for (int is1 = 0; is1 < n; is1++)
            {
                /*                 if (is_symmetric(matrices[is1]))
                                {
                                    flag = 1;
                                    break;
                                } */
                // cout<<matrices[is1][1]<<" "<<matrices[is1][3]<<" ";
                // mistaking 3rd with 3rd index
                if (matrices[is1][1]==matrices[is1][2])
                {
                    flag = 1;
                }
            }
            if (flag==1)
            {
                cout << "YES" << "\n";
            }
            else
            {
                cout << "NO" << "\n";
            }
        }
    }

    return 0;
}