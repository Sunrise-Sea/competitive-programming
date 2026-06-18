#include <bits/stdc++.h>

#define ll long long

using namespace std;
/* int return_3exp(int n)
{
    int result3;
    for (int i = 1; i <= (int)floor(log(n) / log(3)); i++)
    {
        if (n % (int)pow(3, i) != 0)
        {
            result3 = i;
            break;
        }
    }
    return result3;
} */
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    /*     // n = 2^l * 3^m
        // 2^(l+n) * 3^m m = l+n hence n = m-l
        // hence number of operations = 2m - l
        int t;
        ll n = 0;
        cin >> t;
        for (int i = 0; i < t; i++)
        {
            cin >> n;
                     if (n % (int)pow(3, floorf(log(n) / log(3))) != 0)
                    {
                        cout << "No\n";
                    }
                    else{
                        cout<<"Yes\n";
                    }
            cout << fixed << setprecision(10) << pow(3, floorf(log(n) / log(3))) << "\n";
        } */
    int t;
    cin >> t;
    int n;
    cin >> n;
    int ops = 0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n /= 6;
            ops++;
        }
        else if ((n * 2) % 6 == 0)
        {
            n *= 2;
            n /= 6;
            ops += 2;
        }
        else
        {
            break;
        }
        
    }
    return 0;
}