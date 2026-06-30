#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int ops = 0;
        if (b == 1 && a != 1)
        {
            b++;
            ops += 1;
        }
        else if (b == a)
        {
            ops += 1;
            b ++ ;
        }
        // int min_ops =(int)(log(a)/log(b))+ops;

        while ((int)(a / b) != 0)
        {

            // if it is equal then it would be better for b+1 because after that lesser number of operations
            // also we are checking for each step and difference between each step is just one op not the whole ops variable
            // if ((int)(log(a) / log(b)) > (int)(log(a) / log(b + 1))+1) // check to see because we're dividing it hence log is beneficial
            if ((int)(log(a) / log(b)) >= (int)(log(a) / log(b + 1))+1) // check to see because we're dividing it hence log is beneficial
            // if ((int)(log(a) / log(b)) > (int)(log(a) / log(b + 1))+ops) // check to see because we're dividing it hence log is beneficial
            // if (min_ops> (int)(log(a) / log(b + 1)) + ops+1) // check to see because we're dividing it hence log is beneficial
            {
                b++;
                // a = (int)(a / b);
                ops += 1;
                // cout << a << "  --" << "\n";
            }
            else
            {
                a = (int)(a / b);
                ops += 1;
                // cout << a << "  -" << "\n";
            }
        }
        cout << ops + 1 << "\n";
    }

    return 0;
}