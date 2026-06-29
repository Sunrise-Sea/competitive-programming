#include <bits/stdc++.h>
#define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;
// int is_prime(int n){
//     for (int j = 0; j*j < n; j++)
//     {

//     }

//     return 0;
// }
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    while (t--)
    {
        int flag_prime = 1;
        cin >> n;
        if (n % 2 == 0)
            cout << n / 2 << "\n";
        else
        {
            for (int j = 3; j * j <= n; j+=2)// just check odd numbers because even already checked
            {
                if (n % j == 0)
                {
                    flag_prime = 0;// we need n/j if divisible because a increase hence b decrease and a sure won't go until n/2 because
                    // if min lcm hence lcm(a,b) >= max(a,b) in which case, one is divisible by the other hence a(some int k +1) =n
                    

                }
            }
            if (flag_prime)
            {
                cout << 1 << " " << n - 1 << "\n";
            }
        }
    }

    return 0;
}