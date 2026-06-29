#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)
// typedef vector<int> vi;
// int maximum_find(vi &array, int n);
int maximum_find(int array[], int n)
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
int minimum_find(int array[], int n)
{
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
    }
    return minimum;
}
int min2_find(int array[], int n, int min1)
{
    int min2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        // if (array[i] < min2 && min2 > min1)
        if (array[i] < min2 && array[i] > min1)
        {
            min2 = array[i];
        }
    }
    return min2;
}
using namespace std;
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
        int hello[n];
        for (int i = 0; i < n; i++)
        {
            cin >> hello[i];
        }
        // cout<< maximum_find(hello, n) <<"  ";// testing print
        // cout<< minimum_find(hello, n) <<"  ";// testing print
        int maxus = maximum_find(hello, n);
        int minumumsus = minimum_find(hello, n);
        int minsus2 = min2_find(hello, n, minumumsus);
        // cout<< min2_find(hello, n,minumumsus) <<"\n";// testing print
    }

    return 0;
}