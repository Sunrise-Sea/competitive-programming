#include <iostream>

using namespace std;

int index_return(string s, char capital)
{
    if ((int)s.find(capital) == -1 || (int)s.find(capital + 32) == -1)
    {
        return max((int)s.find(capital), (int)s.find((char)(capital + 32)));
    }

    return min((int)s.find(capital), (int)s.find((char)(capital + 32)));
}
int main()
{
    int t;
    int n;
    string s;
    int counter = 0;
    char letter_ind[4];
    char temp_letter_ind[4];
    char ch_ind[4] = {'M', 'E', 'O', 'W'};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cin >> s;
        counter = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
        }
        

        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'm' || s[j] == 'M')
            {
                te_m = j;
                if (le_m == te_m || te_m == le_m + 1)
                {
                    le_m = te_m;
                    counter++;
                }
            }
            else if (s[j] == 'e' || s[j] == 'E')
            {
                te_e = j;
                if (le_e == te_e || te_e == le_e + 1)
                {
                    le_e = te_e;
                    counter++;
                }
            }
            else if (s[j] == 'o' || s[j] == 'O')
            {
                te_o = j;
                if (le_o == te_o || te_o == le_o + 1)
                {
                    le_o = te_o;
                    counter++;
                }
            }
            else if (s[j] == 'w' || s[j] == 'W')
            {
                te_w = j;
                if (le_w == te_w || te_w == le_w + 1)
                {
                    le_w = te_w;
                    counter++;
                }
            }
            else
            {
                break;
            }
        }
        if (n < 4)
        {
            cout << "NO" << endl;
        }

        else if (counter == n && (le_m <= le_e) && (le_e <= le_o) && (le_o <= le_w))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}