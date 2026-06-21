#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, w;
    cin >> n >> w;
    int weights[n];
    int single_flag = 0;
    int double_flag = 0;
    int triple_flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (weights[j] < w)
        {
            single_flag++;
        }
        for (int k = j + 1; k < n; k++)
        {
            if (weights[j] + weights[k] < w)
            {
                double_flag++;
            }
            for (int l = k + 1; l < n; l++)
            {
                if (weights[j] + weights[k] + weights[l] < w)
                {
                    triple_flag++;
                }//blindly incrementing does not work since we want distinct integers
            }
        }
    }
    cout << single_flag << "\n";
    cout << double_flag << "\n";
    cout << triple_flag << "\n";

    return 0;
}