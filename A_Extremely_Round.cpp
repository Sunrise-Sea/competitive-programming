#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, i, flag = 0, numbers = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        i = 0, flag = 0, numbers = 0;
        while (n / (int)pow(10, i) >= 10)
        {
            flag = 1;
            numbers+=9;
            i++;
        }
        if (!flag)
        {
            cout << n << "\n";
        }
        else
        {
            numbers+= n/(int)pow(10,i);//
            cout << numbers << "\n";
        }
    }

    return 0;
}