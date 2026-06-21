#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int k, r, min_tools = 1;
    cin >> k >> r;
    /*  if (k%5!=0&&k%2==0)//additional case
     {
         cout<<"5"<<"\n";
     } */
    if (k % 5 == 0 && k % 2 != 0)
    {
        cout << "2" << "\n";
    }
    else if (k % 10 == 0)
    {
        cout << "1" << "\n";
    }
    else
    {
        while ((k * min_tools - r) % 10 != 0 && (k * min_tools) % 10 != 0) // ALWAYS REMMEBER OPERATOR PRECEDENCE BRO
        {
            if (min_tools < 10)
            {
                min_tools++;
            }
            else
            {
                break;
            }
        }

        cout << min_tools << "\n";
    }

    return 0;
}