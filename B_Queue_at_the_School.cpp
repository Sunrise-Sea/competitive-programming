#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n, t;
    string sequence;
    cin >> n >> t >> sequence;
    int needed_replacements = 0;
    for (int k = 0; k < n - 1; k++)
    {
        if (sequence[k] == 'B' && sequence[k + 1] == 'G')
        {
            needed_replacements++;
        }
    }
    unsigned ll int dynamic_array[50];
    int y = 0;
    for (int h = 0; h < t; h++)
    {
        needed_replacements = 0;
        y = 0;
        for (int k = 0; k < n - 1; k++)
        {
            if (sequence[k] == 'B' && sequence[k + 1] == 'G')
            {
                needed_replacements++;
            }
        }
        for (int j = 0; j < n - 1; j++)
        {
            if (sequence[j] == 'B' && sequence[j + 1] == 'G')
            {
                dynamic_array[y] = j;
                y++;
            }
            if (y == needed_replacements)
            {
                break;
            }
        }

        for (int i = 0; i < needed_replacements; i++)
        {
            sequence[dynamic_array[i]] = 'G';
            sequence[dynamic_array[i] + 1] = 'B';
        }
    }
    /*     cout<<needed_replacements<<endl;
        for (int i = 0; i < needed_replacements; i++)
        {
            cout<<dynamic_array[i]<<endl;
        } */

    cout << sequence << "\n";

    return 0;
}