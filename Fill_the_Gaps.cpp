#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    int n;
    cin >> n;
    int inarr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> inarr[i];
    }
    int breaking_ind;
    for (int i = 0; i < n - 1; i++)
    {

        if (abs(inarr[i] - inarr[i + 1]) == 1)
        {
            breaking_ind = i;
            break;
        }

        else if (inarr[i] < inarr[i + 1])
        {
            for (int j = inarr[i]; j < inarr[i + 1]; j++)
            {
                cout << j << " ";
            }
        }
        else if (inarr[i] > inarr[i + 1])
        {
            for (int j = inarr[i]; j > inarr[i + 1]; j--)
            {
                cout << j << " ";
            }
        }
        
    }
    for (int i = breaking_ind; i < n; i++)
    {
        cout << inarr[i] << " ";
    }


    return 0;
}