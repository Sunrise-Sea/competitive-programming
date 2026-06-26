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
            numbers+=9;// if greater than 10 then that means between 10^(i) and 10^(i+1) all available hence add 9 for that
            i++;
        }
        if (!flag)
        {
            cout << n << "\n";
        }
        else
        {
            numbers+= n/(int)pow(10,i);//add the last place since removing the decimal part will yield the amount of 10^(last power) divisible which yields extrememly round numbers
            cout << numbers << "\n";
        }
    }

    return 0;
}