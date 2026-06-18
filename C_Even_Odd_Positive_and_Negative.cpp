#include <iostream>

#define ll long long
using namespace std;

int main()
{
    ll int n;
    ll int even = 0;
    ll int odd = 0;
    ll positive = 0;
    ll negative = 0;
    cin >> n;
    ll int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            even++;
        }
        if (x % 2 == 1 || x % 2 == -1)
        {
            odd++;
        }
        if (x > 0)
        {
            positive++;
        }
        if (x < 0)
        {
            negative++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative;
    return 0;
}