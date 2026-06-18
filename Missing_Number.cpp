#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int all[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> all[i];
    }
    /*    cout << "{";
        for (int i = 0; i < n - 1; i++)
        {
            if (i == n - 2)
            {
                cout << all[i];
            }
            else
            {
                cout << all[i] << ",";
            }
        }
        cout << "}";

       int tmp[n-1];

        int missing_no = 67;
        int conflicts = 0;
        for (int j = 1; j < n + 1; j++)
        {
            conflicts = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (all[i] == j)
                {
                    conflicts++;
                }
            }
            if (conflicts == 0)
            {
                missing_no = j;
                break;
            }
        }
       for (int j = 1; j < n + 1; j++)
       {
           conflicts = 0;
           if (j!=n-1)
           {
               cout<<all[j-1]==j;
           }
           else
           {
               break;
           }


           if (conflicts == 0)
           {
               missing_no = j;
               break;
           }
       }
       cout << missing_no;*/
    long long intended_sum = n * (n + 1) / 2;
    long long arr_sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arr_sum = arr_sum + all[i];
    }
    cout << (intended_sum - arr_sum);
    return 0;
}
// array 