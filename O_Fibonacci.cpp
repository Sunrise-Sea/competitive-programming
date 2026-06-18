#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    ll fibo[n];
    fibo[0] = 0;
    if (n >= 2)
    {
        fibo[1] = 1;
        for (int i = 2; i < n; i++)
        {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }
    cout << fibo[n - 1];
    // idea - create an array instead of separate variables because we want the n'th fibonacci
    // hence recurse it

    return 0;
}