#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, travel = 0, zero_check = 0, maxblank = 0;
    cin >> t;
    while (t--)
    {
        maxblank = 0;
        travel = 0;
        zero_check = 0;
        cin >> n;
        bool dingus[n];
        for (int i = 0; i < n; i++)
        {
            cin >> dingus[i];
        }
        /*         for (int ind = 0; ind < n - 1; ind++)
                {
                    if (dingus[ind] == dingus[ind + 1])
                    {
                        temp_max_blank++;
                    }
                    else
                    {
                        if (temp_max_blank > maxblank)
                        {
                            maxblank = temp_max_blank;
                        }
                        temp_max_blank = 0;
                    }
                } */
        if (n == 1)
        {
            if (dingus[0] == 0)
            {
                cout << "1" << "\n";
            }
            else
            {
                cout << "0" << "\n";
            }
        }
        else
        {
            while (travel < n)
            {
                if (dingus[travel] == 0)
                {
                    zero_check++;
                }
                else
                {
                    if (zero_check > maxblank)
                        maxblank = zero_check;
                    zero_check = 0;
                }
                if (travel == n - 1 && zero_check > maxblank)
                {
                    maxblank = zero_check;
                    zero_check = 0;
                }

                travel++;
            }

            cout << maxblank << "\n";
        }
    }

    return 0;
}