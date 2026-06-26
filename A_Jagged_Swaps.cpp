#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, flag = 0;
    cin >> t;
    cout << "-------------------------" << "\n";
    while (t--)
    {
        cin >> n;
        flag = 0;
        int facts[n], temp_facts[n];
        for (int i = 0; i < n; i++)
        {
            cin >> facts[i];
            temp_facts[i] = facts[i];
        }
        sort(temp_facts, temp_facts + n);
        for (int j = 1; j < n - 1; j++)
        {
            if (facts[j] > facts[j - 1] && facts[j] > facts[j + 1])
            {
                swap(facts[j], facts[j + 1]);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (facts[i] == temp_facts[i])
            {
                flag++;
            }
        }
        if (flag == n)
        {
            cout << "YES" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }

    return 0;
}