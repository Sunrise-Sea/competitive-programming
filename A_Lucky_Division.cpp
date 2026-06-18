#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int flag = 0;
    int lucky_numbers[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 744, 477, 747, 774, 777};
    /*     for (int i = 0; i < 14; i++)
        {
        } */
    for (auto x : lucky_numbers)
    {

        if (n == x || n % x == 0)
        {
            cout << "YES" << "\n";
            flag = 1;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO" << "\n";
    }

    return 0;
}