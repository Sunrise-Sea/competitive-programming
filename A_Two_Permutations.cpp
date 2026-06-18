#include <bits/stdc++.h>
#define ll long long

using namespace std;

/* int factorial(int n)
{
    int factorial = 1;
    for (int f = 1; f <= n; f++)
    {
        factorial *= f;
    }
    return factorial;
} */
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n, a, b;
    // if there are respective a and b, then they have to exactly a and b of their own respective things
    // ex 1,2,3,4,5 --> 1,3,5,4,2 and a= 2 and b = 2 but only one possible perms but that would mean all 5 elems same
    // hence that's false

    for (int i = 0; i < t; i++)
    {
        cin >> n >> a >> b;

        /*         if (a + b == n || a + b == n - 1) // for the first that would in reality mean a = b = n but that's not the case according to the inputs
                {
                    cout << "No\n";
                } */
        if (((b == a) && (a == n)) || (a + b <= n - 2))
        {
            cout << "Yes\n";
        }
        /*         else if (a + b <= n - 2)
                {
                    cout << "Yes\n";
                } */
        else
        {
            cout << "No\n";
        }
    }
    return 0;
}