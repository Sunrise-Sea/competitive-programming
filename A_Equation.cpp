#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll int n;
    int b_comp = 0;
    cin >> n;
    ll int a, b;
    b = 4;
    a = n + b;
    if (n % 2 == 0)
    {
        cout << a << " " << b << "\n";
    }
    else
    {
        while (b_comp != 2)
        {
/*             for (int j = 2; j <= (int)(ceil(sqrt(b))); j++)
            {
                if (b % j == 0)
                {
                    b_comp++;
                    break;
                }
            } */
            for (int i = 2; i <= (int)ceil(sqrt(a)); i++)
            {

                if (a % i == 0)
                {
                    b_comp++;
                    cout << a << " " << b << "\n";
                    break;
                }
            }
            if (b_comp==1)
            {
                break;
            }
            
            b += 2;
            a = n + b;
        }
    }

    return 0;
}