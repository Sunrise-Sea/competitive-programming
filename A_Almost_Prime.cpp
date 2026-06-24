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

    // int t;
    // cin >> t;
    int precompute[3000];
    for (int i = 0; i < 3000; i++)
    {
        precompute[i] = i + 1;
    }
    for (int j = 0; j < 3000; j++)
    {
        if (is_prime(precompute[j]))
        {
            for (int l = j + 1; l < 3000; l++)
            {
                precompute[l] % precompute[j] == 0 ? precompute[l] = 0 : precompute[l]=precompute[l];
            }
        }
    }
    for (int i = 0; i < 3000; i++)
    {
        cout<<precompute[i]<<"\n";
    }


    return 0;
}