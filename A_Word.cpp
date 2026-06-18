#include <iostream>
#define ll long long
using namespace std;
int main()
{
    string s;
    cin >> s;
    // 65 - 90 = capital letters
    // 97-122 = small letters
    ll int capital = 0;
    for (int i = 0; i < (int)s.size(); i++)
    {
        if ((int)s[i] <= 90 && (int)s[i] >= 65)
        {
            capital++;
        }
    }
    double sized = (double)s.size() / 2;
    /*     if (capital > sized)
        {
            cout << "Smalls will be capitalised";
        }
        else if (capital ==sized)
        {
            cout<<"WHY?";
        }


        else
        {
            cout << "Capitals will be smallised";
        } */
/*     cout << sizeof(sized) << "\n";
    cout << sized << "\n";
    cout << sizeof(capital) << "\n";
    cout << capital << "\n";
    cout << bool(capital == sized) << endl; */
    if (capital <= sized)
    {
        for (int i = 0; i < (int)s.size(); i++)
        {
            if ((int)s[i] <= 90 && (int)s[i] >= 65)
            {
                s[i] = (char)((int)(s[i]) + 32);
            }
        }
    }
    else{
        for (int i = 0; i < (int)s.size(); i++)
        {
            if ((int)s[i] <= 122 && (int)s[i] >= 97)
            {
                s[i] = (char)((int)(s[i]) - 32);
            }
        }

    }

    cout << s;
    return 0;
}