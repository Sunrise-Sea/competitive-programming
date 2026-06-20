#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, sum = 0, temp_sum, x;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        /*         for (int i = 2; i <= n; i++)
                {
                    temp_sum = (int)(n/i)*((int)(n/i)+1)*i/2;
                    if (temp_sum>sum)
                    {
                        x = i;
                        sum = temp_sum;
                    }

                }
                cout<<x<<"\n"; */
        // O(n) - solution
        // O(1) solution try
        // decreasing sum because [n/x]*([n/x]+1)*x hence as x increases hence two x's decrease the whole thing
        if ((int)(n / 3) * ((int)(n / 3) + 1) * 3 / 2 > (int)(n / 2) * ((int)(n / 2) + 1) * 2 / 2)
        {
            cout << "3" << "\n";
        }
        else
        {
            cout << "2" << "\n";
        }
    }

    return 0;
}