#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string games;
    cin >> n >> games;
    int anton = 0;
    for (int i = 0; i < n; i++)
    {
        if (games[i] == 'A')
        {
            anton++;
        }
    }
    if (anton == n - anton)
    {
        cout << "Friendship" << "\n";
    }
    else if (anton > n - anton)
    {
        cout << "Anton" << "\n";
    }
    else if (anton < n - anton)
    {
        cout << "Danik" << "\n";
    }

    return 0;
}