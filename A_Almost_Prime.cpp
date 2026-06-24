#include <bits/stdc++.h>
#define ll long long

using namespace std;
int is_prime(int n)
{
    int flag = 1;
    for (int i = 2; i * i <= n; i++)
    {
        n % i == 0 ? flag = 0 : flag = 1;
        if (!flag)
            break;
    }

    return flag;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int precompute[2999];
    for (int i = 2; i <= 3000; i++)
    {
        precompute[i - 2] = i;
    }
    int divisors = 0, almost_primes = 0;
    // cout<<"Checkpoint"<<"\n";
    for (int j = 0; j < 2999; j++)
    {
        if (is_prime(precompute[j]) && precompute[j] != -1)
        {
            for (int l = j + 1; l < 2999; l++)
            {
                // precompute[l] % precompute[j] == 0 ? precompute[l] = INT_MAX : precompute[l]=precompute[l];
                if (precompute[l] % precompute[j] == 0 && precompute[j] != 1)
                {
                    precompute[l] = -1;
                }
                else if (precompute[j] == -1)
                {
                    continue;
                }
            }
        }
        else if (precompute[j] == -1)
        {
            continue;
        }
    }
    // for (int i = 0; i < 2999; i++)
    // {
    //     if (precompute[i] != -1)
    //     {

    //         cout << precompute[i] << " " << is_prime(precompute[i]) << "\n";
    //     }
    // }
    // for (int u = 0; u < t - 2; u++)
    // {
    //     t % precompute[u] == 0 ? divisors++:
    // }
    for (int k = 2; k <= t; k++)
    {
        divisors = 0;
        for (int p = 0; p <= k - 2; p++)
        {
            if (precompute[p] == -1)
            {
                continue;
            }
            else if (k % precompute[p] == 0)
            {
                divisors++;
            }
        }
        divisors == 2 ? almost_primes++ : false;
        cout << divisors <<" "<< almost_primes << "\n";
    }

    return 0;
}