#include <bits\stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, t;
    cin >> t;
    int max_people = 0;
    for (int j = 0; j < t; j++)
    {
        max_people=0;
        cin >> n >> k;
        string t[n]; // each member's opinion on k discussions
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (t[0] == t[i])
            {
                max_people++;
            }
        }
        cout << max_people << endl;
    }

    return 0;
}