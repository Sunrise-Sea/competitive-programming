#include <bits/stdc++.h>
// #define ll long long
// #define Loop(i, a, b) for (int i = a; i < b; i++)

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    int arrays[n], queries[k];
    for (int i = 0; i < n; i++)
    {
        cin >> arrays[i];
    }
    for (int j = 0; j < k; j++)
    {
        cin >> queries[j];
    }
    int low = 0, high = n - 1, result = 0;
    for (int l = 0; l < k; l++)
    {
        low = 0, high = n - 1, result = 0;
        // queries[l];
        // binary search is required because 10 power 5 elements hence it wouldn't cmopute
        // and binary sarch on the array given since it's sorted
        // and we want the upper bound
        // int mid = low + (high - low) / 2;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            // if (arrays[mid] == queries[l])
/*             if (arrays[mid] >= queries[l]) // we wanted the not greater stuff not equal stuff
            {
                // result = arrays[mid];
                result = mid;
                // low = mid + 1;
                high = mid - 1;
            }
            else
            { there was a BIG mistake here
                low = mid + 1;
            } */
            if (queries[l] >= arrays[mid]) // we wanted the not greater stuff not equal stuff
            {
                // result = arrays[mid];
                result = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
                // low = mid + 1;
            }
        }
        // cout << (result == 0 ? result : result + 1) << "\n";
        cout << (result == 0 ? result : result + 1) << "\n";
    }

    return 0;
}