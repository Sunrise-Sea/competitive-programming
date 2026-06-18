#include <iostream>

using namespace std;

int index_return(string s, char capital)
{
    if ((int)s.find(capital) == -1 || (int)s.find(capital + 32) == -1)
    {
        return max((int)s.find(capital), (int)s.find((char)((int)capital + 32)));
    }
    else
    {

        return min((int)s.find(capital), (int)s.find((char)((int)capital + 32)));
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    string s;
    int counter = 0;
    char letter_ind[4], temp_letter_ind[4], ch[4] = {'M', 'E', 'O', 'W'};
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cin >> s;
        counter = 0;
        for (int k = 0; k < 4; k++)
        {
            letter_ind[k] = index_return(s, ch[k]);
            // cout << index_return(s, ch[k]) << " ";
        }

        if (n < 4)
        {
            cout << "NO" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
// cout << "YES" << endl;
// else if (counter == n && (le_m <= le_e) && (le_e <= le_o) && (le_o <= le_w))
/*             if (s[j] == 'm' || s[j] == 'M')
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
            } */