#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int coins[n], sum = 0, take_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += coins[i];
    }
    sort(coins,coins+n);
    int indic = 0;
    while (take_sum <= sum / 2) // it will exit at !(condition) hence solely takesum<sum/2 will mean takesum may equal to sum too and it will exit which we don't want
    {
        take_sum+=coins[n-1-indic]; // add from the lasts since they are the biggest until they are NOT EQUAL OR LESS THAN SUM/2
        indic++;
    }
    cout<<indic<<"\n";

    return 0;
}