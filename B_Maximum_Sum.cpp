#include <bits/stdc++.h>
#define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

// typedef vector<int> vi;
// int maximum_find(vi &array, int n);
using namespace std;
int maximum_find(ll array[], int n)
{
    int maximum = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] > maximum)
        {
            maximum = array[i];
        }
    }
    return maximum;
}
int min_sum_find(ll array[], int n) // actually new idea, just return the 2 min elems sum itself
{
    ll minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    ll min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (array[i] < min2 && min2 > min1)
        if (array[i] < min2 && array[i] > minimum)
        {
            min2 = array[i];
        }
    }
    return minimum + min2;
}
// int min2_find(int array[], int n, int min1)
// {
//     return min2;
// }
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        // vi hello(n);
        vector<ll> hello(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> hello[i];
            // sum += hello[i];
        }
        // int temp_n = n;
        // cout<< maximum_find(hello, n) <<"  ";// testing print
        // cout<< minimum_find(hello, n) <<"  ";// testing print
        /*         while (k--)
                {

                    ll minimum = INT_MAX;
                    for (int i = 0; i < n; i++)
                    {
                        if (hello[i] < minimum)
                        {
                            minimum = hello[i];
                        }
                    }
                    ll min2 = INT_MAX;
                    for (int i = 0; i < n; i++)
                    {
                        // if (hello[i] < min2 && min2 > min1)
                        if (hello[i] < min2 && hello[i] > minimum)
                        {
                            min2 = hello[i];
                        }
                    }
                    ll maxus = maximum_find(hello, n);
                    ll minumumsum = min_sum_find(hello, n);
                    // cout<<maxus<<"  ";
                    // cout<<minumumsum<<"\n";
                    // int minsus2 = min2_find(hello, n, minumumsus);
                    if (maxus > minumumsum)
                    {
                        sum -= minumumsum;
                    }
                    else
                    {
                        sum -= maxus;
                    }
                } */
        // actually, no just sort it and get the direct indices, no need for pesky minimums and maxes
        sort(hello.begin(), hello.end());//learnt this from book
        // int yes = 0; // all elems are distinc
        // while (yes < k)
        while (k--)
        {
            if (hello[0] + hello[(0) + 1] < hello[n - 1])
            {
                hello.erase(hello.begin());
                hello.erase(hello.begin());
                n-=2;
                // hello[2 * yes] = 0;
                // hello[(2 * yes) + 1] = 0;
            }
            // if (hello[2 * yes] + hello[(2 * yes) + 1] >= hello[n - 1 - yes])
            else
            {
                hello.pop_back();
                n--;
                // hello[n - 1 ] = 0;
            }
            // yes++;
        }
        for (int i = 0; i < n; i++)
        {
            sum += hello[i];
        }

        cout << sum << "\n";

        // cout<< min2_find(hello, n,minumumsus) <<"\n";// testing print
    }

    return 0;
}