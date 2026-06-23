#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int numbers[n];
    int minimum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    minimum = abs(numbers[0]);
    for (int i = 0; i < n; i++)
    {
        if (minimum >= abs(numbers[i]))
        {
            minimum = abs(numbers[i]);
        }
    }

    cout << minimum << "\n";

    return 0;
}