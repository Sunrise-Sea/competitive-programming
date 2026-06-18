#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A <= B)
    {
        if (B <= C)
        {
            cout << A << " " << C;
        }
        else
        {
            if (A <= C)
            {
                cout << A << " " << B;
            }
            else
            {
                cout << C << " " << B;
            }
        }
    }
    else
    { // A>B
        if (B >= C)
        {
            cout << C << " " << A;
        }
        else // C>B
        {
            if (A >= C)
            {
                cout << B << " " << A;
            }
            else // A<C
            {
                cout << B << " " << C;
            }
        }
    }

    return 0;
}
