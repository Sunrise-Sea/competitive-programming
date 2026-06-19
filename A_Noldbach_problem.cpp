#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, actual = 0;
    cin >> n >> k;
    int int_upto_n[n - 1];
    int isprime = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int_upto_n[i] = i + 2;
    }
    for (int j = 0; j < n - 1; j++)
    {
        isprime = 1;
        for (int k = 2; k <= (int)(ceil(sqrt(int_upto_n[j]))); k++)
        {
            if (int_upto_n[j] % k == 0)
            {
                isprime = 0;
                break;
            }
        }
        cout << isprime << " ";
        cout << int_upto_n[j] << "\n";
        /*         if (isprime)
                {
                    for (int l = 0; l < n - 1; l++)
                    {
                        if (int_upto_n[l] % int_upto_n[j] == 0)
                        {
                            int_upto_n[l] = 0;
                        }
                    }
                } */
    }
    for (int i = 0; i < n - 1; i++)
    {
    }

    /*     for (int i = 4; i < n; i++)
        {
            isprime = 1;
            for (int j = 2; j <= (int)ceil(sqrt(i)); j++)
            {
                if (i % j == 0)
                {
                    isprime = 0;
                }
            }
            if (isprime)
            {
                actual++;
            }

        } */
    /* if (actual >= k)
    {
        cout << actual << "\n";
        cout << "YES" << "\n";
    }
    else
    {
        cout << actual << "\n";
        cout << "NO" << "\n";
    } */

    return 0;
}