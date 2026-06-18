// for (int j = 0; j < n; j++)
// {
//     if (s[j] == 'm' || s[j] == 'M')
//     {
//         te_m = j;
//         if (le_m == te_m || te_m == le_m + 1)
//         {
//             le_m = te_m;
//             counter++;
//         }
//     }
//     else if (s[j] == 'e' || s[j] == 'E')
//     {
//         te_e = j;
//         if (le_e == te_e || te_e == le_e + 1)
//         {
//             le_e = te_e;
//             counter++;
//         }
//     }
//     else if (s[j] == 'o' || s[j] == 'O')
//     {
//         te_o = j;
//         if (le_o == te_o || te_o == le_o + 1)
//         {
//             le_o = te_o;
//             counter++;
//         }
//     }
//     else if (s[j] == 'w' || s[j] == 'W')
//     {
//         te_w = j;
//         if (le_w == te_w || te_w == le_w + 1)
//         {
//             le_w = te_w;
//             counter++;
//         }
//     }
//     else
//     {
//         break;
//     }
// }
// if (n < 4)
// {
//     cout << "NO" << endl;
// }

// else if (counter == n && (le_m <= le_e) && (le_e <= le_o) && (le_o <= le_w))
// {
//     cout << "YES" << endl;
// }
// else
// {
//     cout << "NO" << endl;
// }
#include <iostream>

using namespace std;

int main()
{
    int t;
    int n;
    string s;
    int le_m = 0;
    int le_e = 0;
    int le_o = 0;
    int le_w = 0;
    int te_m = 0;
    int te_e = 0;
    int te_o = 0;
    int te_w = 0;
    int counter = 0;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        cin >> s;
        counter = 0;
        le_m = min((int)s.find('m'), (int)s.find('M'));
        le_e = min((int)s.find('e'), (int)s.find('E'));
        le_o = min((int)s.find('o'), (int)s.find('O'));
        le_w = min((int)s.find('w'), (int)s.find('W'));
        char ch_ind[4] = {'M', 'E', 'O', 'W'};
        char chsmall_ind[4] = {'m', 'e', 'o', 'w'};
    }
    
    return 0;
}