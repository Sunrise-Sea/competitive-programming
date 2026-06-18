#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main()
{
    int x;
    cin >> x;
    int counter_prime = 0;

    /* if (x == 2)
     {
         cout << "YES";
     }

     else if (x % 2 == 0 && x != 2)
     {
         cout << "NO";
     }
     else if (x % 2 == 1)
     {
         for (int i = 2; i <= int(ceil(sqrt(x))); i++)
         {
             if (x % i == 0)
             {
                 cout << "NO";
                 counter_prime += 1;
                 break;
             }
         }
         if (counter_prime == 0)
         {
             cout << "YES";
         }
     }*/
    for (int i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            counter_prime += 1;
            break;
        }
    }
    if (counter_prime==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    

    return 0;
}