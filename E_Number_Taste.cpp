#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, pos = 1, number = 1;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        number=1;//forgor to add this
        pos=1;// also forgor to add this
        cin >> n;
        while (pos < n)
        {
            number++;
            if (number % 3 != 0 &&  number % 10 != 3)
            {
                pos++;
            }
        }
        cout<<number<<"\n";
    }

    return 0;
}