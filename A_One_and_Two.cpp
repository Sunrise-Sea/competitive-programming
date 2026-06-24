#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k = 0;ll prod1 = 1, prod2 = 1;
    cin >> t;
    while (t--)
    {

            prod1 = 1, prod2 = 1;
        k = 0;
        cin >> n;
        ll arr[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (int u = 0; u < n; u++)
        {
            arr[u]=(ll)log2l(arr[u]);
        }
        
        do
        {
            // product maybe overflowing a bit
            k++;
            prod1 = 1, prod2 = 1;
            for (int i = 0; i < k; i++)
            {
                prod1 += arr[i];
            }
            for (int l = k; l < n; l++)
            {
                prod2 += arr[l];
            }
        } while (prod1 != prod2 && k < n);
            // cout << k << " " << prod1 << " " << prod2 << "\n";
        if (prod1==prod2)
        {
            cout<<k<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        
        
    }

    return 0;
}