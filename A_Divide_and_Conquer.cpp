#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n;
    int ops_count;
    int sum = 0;
    cin >> t;
    for (int j = 0; j < t; j++)
    {
        sum = 0;
        cin >> n;
        int input_array[n];
        int numberofops[n];
        int temp_ind, min_ops = 0;
        for (int k = 0; k < n; k++)
        {
            cin >> input_array[k];
            sum += input_array[k];
        }
        if (sum % 2 == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                ops_count = 0;
                temp_ind = input_array[i];
                while (temp_ind % 2 == input_array[i] % 2)
                {
                    input_array[i] = input_array[i] / 2;
                    ops_count++;//yes test
                }
                numberofops[i] = ops_count;
            }
            min_ops = numberofops[0];
            for (int i = 0; i < n; i++)
            {
                if (numberofops[i] < min_ops)
                {
                    min_ops = numberofops[i];
                }
            }
            cout << min_ops << "\n";//minops
        }
    }

    return 0;
}