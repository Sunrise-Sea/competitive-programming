#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int N;
    cin >> N;
    if (N % 5 <= 2)
    {
        N = N - (N % 5);
    }
    else
    {
        N = N + 5 - (N % 5);
    }
    cout << N << endl;

    return 0;
}