#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int twin_perm[n];
        for (int i = 0; i < n; i++)
        {
            cin >> twin_perm[i];
        }
        /*         for (int j = 0; j < n-1; j++)
                {
                    if (twin_perm[j]<=twin_perm[j+1])
                    {
                        cout<<twin_perm[j]<<"\n";
                    }
                    else
                    {

                    }


                } */
        //    since all are distinct elements and 1<=ai<=n hence all 1 to n numbers included hence we can just take best case and do that
        // sum can be all equal hence min +max --> n+1
        for (int j = 0; j < n; j++)
        {
            cout << n + 1 - twin_perm[j] << " ";
        }
    }

    return 0;
}