#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;
    cin >> n >> s;
    int flag = 0; // denoting if there are 3 consecutive cells
    int count_of_empty = 0;
    int current_count_of_empty = 0;
    for (auto ch : s)
    {
        if (ch == '.')
        {
            current_count_of_empty++;
        }
        else
        {
            count_of_empty += current_count_of_empty;
            if (current_count_of_empty > 2)
                flag = 1;
            current_count_of_empty = 0;
        }
    }
    count_of_empty += current_count_of_empty;
    if (current_count_of_empty > 2)
        flag = 1;
    if (flag)
        cout << 2;
    else
        cout << count_of_empty << "\n";

    return 0;
}