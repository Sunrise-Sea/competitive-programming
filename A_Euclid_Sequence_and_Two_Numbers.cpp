#include <bits/stdc++.h>
// #include <math.h>
#define ll long long

using namespace std;

/* int check_remainder(int array[], int n)
{

} */
ll return_max(ll int array[], int elems)
{
    ll int maximum = 0;
    for (int i = 0; i < elems; i++)
    {
        if (maximum <= array[i])
        {
            maximum = array[i];
        }
    }
    return maximum;
}
// ll int second_max(ll int array[], int elems)
// {
//     ll int max = return_max(array, elems);
//     ll int second_max =0 ;
//     for (int i = 0; i < elems; i++)
//     {
//         if (second_max<=array[i] && second_max<second_max)
//         {
//             /* code */
//         }

//     }

// }
int number_of_max(int n, ll int array[])
{
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == return_max(array, n))
        {
            num++;
        }
    }
    return num;
}
int main()
{

    // // int t;
    // int remainder = 0;
    // int n;
    // // int x, y;
    // int counter;
    // // x = 0, y = 0;
    // counter = 0;
    // cin >> n;
    // ll int b_arr[n];
    // // ll int temp_arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> b_arr[i];
    //     // temp_arr[i] = b_arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         remainder = minmax(b_arr[i], b_arr[j]).second % minmax(b_arr[i], b_arr[j]).first;
    //         /*             x = minmax(b_arr[i], b_arr[j]).second;
    //                     y = minmax(b_arr[i], b_arr[j]).first; */
    //         /*             temp_arr[0] = x;
    //                     temp_arr[1] = y; */
    //         if (remainder==0)
    //         {
    //             break;
    //         }

    //         for (int k = 0; k < n; k++)
    //         {
    //             if (remainder == b_arr[k])
    //             {
    //                 counter++;
    //                 break;
    //             }
    //         }
    //     }
    // }
    // cout << counter << endl;
    // cout << remainder << endl;
    // there is going to be one max number take that
    int n;
    int counter;
    ll int max;
    // int max_index;
    int x, y;
    y = 0;
    cin >> n;
    ll int b[n];
    for (int in = 0; in < n; in++)
    {
        cin >> b[in];
    }
    max = return_max(b, n);
    x = max;

    for (int i = 0; i < n; i++)
    {
        y = b[i];
        if (y == max)
        {
            continue;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (x % y == b[j])
                {
                    b[j] = -1;
                    counter++;
                    x = b[i];
                    break;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}