#include <iostream>
using namespace std;
// int factorial(int n){
//     int ans=1;
//     for (int i = 1; i <= n; i++)
//     {
//         ans *=i;
//     }
//     return ans;

// }
int main()
{
    int k, s;
    cin >> k >> s;
    if (s <= k)
    {
        cout << (s + 2) * (s + 1) / 2 << endl;
    }
    else if (s > k && s <= 2 * k + 1)
    {
        cout << ((s + 2) * (s + 1) / 2) - 3 * ((s - k + 1) * (s - k) / 2) << endl;
    }
    else if (s > 2 * k + 1 && s <= 3 * k)
    {
        cout << ((s + 2) * (s + 1) / 2) - 3 * ((s - k + 1) * (s - k) / 2) + 3 * ((s - 2 * k) * (s - 2 * k - 1) / 2) << endl;
    }

    return 0;
}