#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, small = 0, larg = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        small = 0;
        larg = 0;
        int doremy[n];

        for (int i = 0; i < n; i++)
        {
            cin >> doremy[i];
        }
        sort(doremy, doremy + n);
        if (n == 2)
        {
            cout << "Yes" << "\n";
        }
        else if (n == 3)
        {
            if (doremy[0] == doremy[1])
                cout << "Yes" << "\n";
            else
                cout << "No" << "\n";
        }
        else
        {
            if (n % 2 == 0)
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (doremy[i] == doremy[i + 1])
                    {
                        if (i < (n / 2) - 1)
                            small++;
                        else
                            larg++;
                    }
                }
                if ((larg == small && larg + small == n - 2) || (larg + small == n - 1 && abs(larg - small) == 1))
                    cout << "Yes" << "\n";
                else
                    cout << "No" << "\n";
            }
            else
            {
                for (int i = 0; i < n - 1; i++)
                {
                    if (doremy[i] == doremy[i + 1])
                    {
                        if (i < (n - 1) / 2)
                        {
                            small++;
                        }
                        else 
                        {
                            larg++;
                        }
                        // else
                        // {
                        //     if (doremy[(n - 1) / 2] == doremy[((n - 1) / 2) - 1] || doremy[(n - 1) / 2] == doremy[((n - 1) / 2) + 1])
                        //     {
                        //         odd_sp = 1;
                        //     }
                        // }
                    }
                }
                if ((larg + small == n - 2 && abs(larg - small) == 1))
                {
                    cout<<"Yes"<<"\n";
                }
                else
                {
                    cout<<"No"<<"\n";
                }
                
                
            }
        }
    }

    return 0;
}
/*             for (int i = 0; i < n - 1; i++)
            {
                if (doremy[i] == doremy[i + 1])
                {
                    small++;
                    if (i == n - 2 && (small == n  - 1 ))
                    {
                        larg++;
                    }
                    else if (i == n - 2 && larg == 0 && small == n - 1)
                    {
                        larg++;
                    }
                }
                else
                {
                    if (small == (n / 2) - 1 || small == (n - 1) / 2)
                    {

                        larg++;
                    }
                }
            }
            if (larg == 2)
            {
                cout << "Yes" << "\n";
            }
            else
            {
                cout << "No" << "\n";
            } */
/*             for (int j = i + 1; j < n; j++)
            {

                 if (doremy[i] == doremy[j])
                {
                    doremy[j] = -1;
                    if (j = n - 1)
                    {
                        doremy[i] = -i;
                    }

                    small++;
                }
            } */
/*         for (int i = 0; i < n; i++)
        {
            cout << doremy[i] << " ";
        } */