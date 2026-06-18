#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin >> n;
    /*int num_of_divisors=0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            num_of_divisors++;
            cout<<i<<"\n";
        }

    }*/
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}