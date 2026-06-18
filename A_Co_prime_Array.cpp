#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int ops = 0;
    cin >> n;
    int co_array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> co_array[i];
    }
    for (int j = 1; j < n; j++)
    {
        cout << co_array[j - 1] << " ";
        if (gcd(co_array[j], co_array[j - 1]) != 1)
        {
            if (co_array[j - 1] > co_array[j])
            {
                for (int k = co_array[j - 1]; k > co_array[j]; k--)
                {
                    if (gcd(co_array[j - 1], k) == 1 && gcd(co_array[j], k) == 1)
                    {
                        cout << k << " ";
                        ops++;
                        break;
                    }
                }
            }
            else
            {
                for (int k = co_array[j - 1]; k < co_array[j]; k++)
                {
                    if (gcd(co_array[j - 1], k) == 1 && gcd(co_array[j], k) == 1)
                    {
                        cout << k << " ";
                        ops++;
                        break;
                    }
                }
            }
        }
    }
    cout << co_array[n - 1] << " ";

    return 0;
}