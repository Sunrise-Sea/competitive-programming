#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int year;
    cin >> year;

    int year_arr[4];
    /*    year_arr[0] = year%10;
        for (int i = 1; i < 4; i++)
        {
            year_arr[i]=((year%((int)pow(10,i+1)))-(year%(int)pow(10,i)))/(int)pow(10,i);
        }
        for (int i = 3; i >= 0; i--)
        {
            cout<<year_arr[i];
        } */
    int counter = 0;
    while (year <= 9050)
    {
        counter = 0;
        ++year;
        year_arr[0] = year % 10;
        for (int i = 1; i < 4; i++)
        {
            /*             if (((year % ((int)pow(10, i + 1))) - (year % (int)pow(10, i))) / (int)pow(10, i) != ((year % ((int)pow(10, i + 2))) - (year % (int)pow(10, i + 1))) / (int)pow(10, i + 1))
                        {
                            counter++;
                            } */
            year_arr[i] = ((year % ((int)pow(10, i + 1))) - (year % (int)pow(10, i))) / (int)pow(10, i);
        }
        for (int i = 0; i < 10; i++)
        {
            counter = 0;
            for (int j = 0; j <= 3; j++)
            {
                if (year_arr[j] == i)
                {
                    counter++;
                    if (counter >= 2)
                    {
                        break;
                    }
                }
            }
            // cout << "Counter of " << i << " : - " << counter << endl;
            if (counter >= 2)
            {
                break;
            }
        }

        // cout << "Year : - " << year << endl;
        if (counter == 0 || counter == 1)
        {
            cout << year << endl;
            break;
        }
        /*         if (counter == 3)
                {
                    cout << year;
                    break;
                } */
    }

    return 0;
}