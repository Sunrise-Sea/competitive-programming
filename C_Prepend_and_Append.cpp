#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    cin >> t;
    string binary;
    while (t--)
    {
        cin >> n >> binary;
        for (int i = 0; i < 2; i++)
        {
            if ((binary[n - 1] == '0' && binary[0] == '1') || (binary[n - 1] == '1' && binary[0] == '0'))
            {
                // cout << (int)binary.length() << "\n";
                binary.pop_back();
                binary.erase(0, 1);
                n-=2;
                // forgot to decrease n
            }
        }
        // binary.erase(0, 1);//number of characters to remove after that index start
        // cout << (int)binary.length() << "\n";
        cout << n << "\n";
    }

    return 0;
}