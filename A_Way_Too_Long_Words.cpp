#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    string long_word;
    int nice_size = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> long_word;
        nice_size = long_word.size();
        if (nice_size > 10)
        {
            cout << long_word[0] << nice_size - 2 << long_word[nice_size - 1] << "\n";
        }
        else
        {
            cout << long_word << "\n";
        }
    }

    return 0;
}