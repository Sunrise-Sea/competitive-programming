#include <iostream>
int main()
{
    long long int a, b, k;
    /*
    a - Memo
    b - Momo
    */
    std::cin >> a >> b >> k;
    if (a % k == 0 && b % k != 0)
    {
        std::cout << "Memo";
    }
    else if (a % k != 0 && b % k == 0)
    {
        std::cout << "Momo";
    }
    else if (a % k == 0 && b % k == 0)
    {
        std::cout << "Both";
    }
    else
    {
        std::cout<<"No One";
    }
    
    return 0;
}
