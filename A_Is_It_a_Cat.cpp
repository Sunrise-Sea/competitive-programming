#include <bits/stdc++.h>

using namespace std;

/* int index_return(string s, char capital)
{
    if ((int)s.find(capital) == -1 || (int)s.find(capital + 32) == -1)
    {
        return max((int)s.find(capital), (int)s.find((char)((int)capital + 32)));
    }
    else
    {

        return min((int)s.find(capital), (int)s.find((char)((int)capital + 32)));
    }
} */
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    string s;

    int counter = 0;
    int le_m = 0, le_e = 0, le_o = 0, le_w = 0, te_m = 0, te_e = 0, te_o = 0, te_w = 0;
    // char letter_ind[4], temp_letter_ind[4], ch[4] = {'M', 'E', 'O', 'W'};
    cin >> t;
    for (int something = 1; something <= t; something++)
    {
        cin >> n >> s;
        counter = 0;
        for (int i = 0; i < n; i++)
        {
            if ((int)s[i] >= 65 && (int)s[i] <= 90)
            {
                s[i] = (char)((int)s[i] + 32);
            }
        }

        le_m = s.find('m');
        le_e = s.find('e');
        le_o = s.find('o');
        le_w = s.find('w');
        for (int j = 0; j < n; j++)
        {
            if (s[j] == 'm')
            {
                te_m = j;
                if (le_m == te_m || te_m == le_m + 1)
                {
                    le_m = te_m;
                    counter++;
                }
            }
            else if (s[j] == 'e')
            {
                te_e = j;
                if (le_e == te_e || te_e == le_e + 1)
                {
                    le_e = te_e;
                    counter++;
                }
            }
            else if (s[j] == 'o')
            {
                te_o = j;
                if (le_o == te_o || te_o == le_o + 1)
                {
                    le_o = te_o;
                    counter++;
                }
            }
            else if (s[j] == 'w')
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

        if (n >= 4 && counter == n && (le_m <= le_e) && (le_e <= le_o) && (le_o <= le_w))
        {
            cout << "YES " << "\n";
        }

        else
        {
            cout << "NO " << "\n";
        }
    }
    return 0;
}
/* for (int k = 0; k < 4; k++)
        {
            letter_ind[k] = index_return(s, ch[k]);
            // cout << index_return(s, ch[k]) << " ";
        }

        for (int j = 0; j < n; j++)
        {
                        for (int ch_index = 0; ch_index < 4; ch_index++)
                        {
                            if (s[s_index] == ch[ch_index] || s[s_index] == (char)((int)ch[ch_index] + 32))
                            {
                                temp_letter_ind[ch_index] = s_index;
                                if (letter_ind[ch_index] == temp_letter_ind[ch_index] || letter_ind[ch_index] == temp_letter_ind[ch_index] + 1)
                                {
                                    letter_ind[ch_index] = temp_letter_ind[ch_index];
                                    counter++;
                                }
                            }
                        }
            if (s[j] == 'm' || s[j] == 'M')
            {
                temp_letter_ind[0] = j;
                if (letter_ind[0] == temp_letter_ind[0] || letter_ind[0] == temp_letter_ind[0])
                {
                    letter_ind[0] = temp_letter_ind[0];
                    counter++;
                }
            }
            else if (s[j] == 'e' || s[j] == 'E')
            {
                temp_letter_ind[1] = j;
                if (letter_ind[1] == temp_letter_ind[1] || letter_ind[1] == temp_letter_ind[1])
                {
                    letter_ind[1] = temp_letter_ind[1];
                    counter++;
                }
            }
            else if (s[j] == 'o' || s[j] == 'O')
            {
                temp_letter_ind[2] = j;
                if (letter_ind[2] == temp_letter_ind[2] || letter_ind[2] == temp_letter_ind[2])
                {
                    letter_ind[2] = temp_letter_ind[2];
                    counter++;
                }
            }
            else if (s[j] == 'w' || s[j] == 'W')
            {
                temp_letter_ind[3] = j;
                if (letter_ind[3] == temp_letter_ind[3] || letter_ind[3] == temp_letter_ind[3])
                {
                    letter_ind[3] = temp_letter_ind[3];
                    counter++;
                }
            }
            else
            {
                break;
            }
        }*/
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