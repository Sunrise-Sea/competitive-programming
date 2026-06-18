#include <bits/stdc++.h>
#define ll long long

using namespace std;
int math_check(int n2, int n3)
{
    if (n2 % 2 == n3 % 2)
    {
        return 1;
    }
    return 0;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    int n[3];
    for (int i = 0; i < t; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> n[i];
        }
        // subtracting same parity numbers yields even numbers
        cout << math_check(n[1], n[2]) << " " << math_check(n[2], n[0]) << " " << math_check(n[0], n[1]) << "\n";
    }

    return 0;
}