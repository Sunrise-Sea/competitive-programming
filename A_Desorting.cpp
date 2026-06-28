#include <bits/stdc++.h>
#define ll long long // macros change certain strings in the code to mean the ascertained strings before compilation of the code
#define PB push_back
#define Loop(i, a, b) for (int i = a; i < b; i++)

// a 128 bit integer also exists though may not be available in all contest systems
// printf is usually a bit faster but also difficult to use (like the %d and %f stuff)
// similar properties for scanf too
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, maxes = 0;
    cin >> t;
    while (t--)
    {
        // okay so if you add 1 to the initial i and subtract 1 from the remaining the initial and the remaining are in their own still sorted
        //  so choose such that ai and ai+1 get de-sorted in minimum operations
        //  also check whether there is any instance of de-sorting already
        cin >> n;
        maxes = 0;
        // trying vectors for the first time;
        vector<int> v;
        // cout<<v.capacity()<<"\n";
        v.assign(n, 0);
        // cout<<v.capacity()<<"\n";
        // cout<<v.at(2)<<"\n";
        // for (int i = 0; i < n; i++)
        Loop(j, 0, n)
        {
            cin >> v[j];
            // v.PB(v[i]);
        }
        // got this from the book
        // temp_n = n;
        // while (cin>>x && n--)
        // {
        //     cout<<x<<"\n";
        // }
        // for (int i = 0; i < temp_n; i++)
        // {
        //     cout<<v.at(i)<<"\n";
        // }
        /* for floating point operations (especially ==)
        use abs(a-b)<1e-9
        to account for the rounding errors that occur because of floating point numbers example try doing
        double x = 0.3*3 + 0.1
        */
        Loop(i, 0, n - 1)
        {
            if ((v[i + 1] - v[i]) > 0)
            {
                if (maxes < (v[i + 1] - v[i]))
                {
                    maxes = (v[i + 1] - v[i]);
                }
            }
            else
            {
                cout << 0 << "\n";
                break;
            }
        }
        // cout<<v.capacity();

        // __int128_t sus = __INTMAX_MAX__;
    }

    return 0;
}