#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int welfare[n];
    for (int i = 0; i < n; i++)
    {
        cin >> welfare[i];
    }
    int king_donate = 0;
    int max_no = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_no <= welfare[i])
        {
            max_no = welfare[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        king_donate += max_no - welfare[i];
    }
    cout << king_donate << "\n";

    return 0;
}