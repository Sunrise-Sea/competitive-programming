#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n, counter;
    string s;
    for (int i = 0; i < t; i++)
    {
        counter = 0;
        cin >> n;
        cin >> s;

        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '.' && s[i + 1] == '.' && s[i - 1] == '.')
            {
                counter = 2;
                break;
            }
        }
        if (counter != 2)
        {
            for (int k = 0; k < n; k++)
            {
                if (s[k] == '.')
                {
                    counter++;
                }
            }
        }

        cout << counter << "\n";
    }

    return 0;
}