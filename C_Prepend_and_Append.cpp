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
        while (true)
        {
            if ((binary[n - 1] == '0' || binary[0] == '1') || (binary[n - 1] == '1' || binary[0] == '0'))
            {
                binary.pop_back();
                binary.erase(0, 0);
            }
            else
            {
                break;
            }
        }
        cout<<binary.length()<<"\n";
    }

    return 0;
}