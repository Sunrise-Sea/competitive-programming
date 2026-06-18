#include <bits/stdc++.h>

using namespace std;
/* void Func_Name(int x){
} */
int Func_Name()
{

    return 0;
    cout << "Hello"; // anything after returning the specific thing of the data type of function, will not run
}
int main()
{
    /*     cout<<(int)(INT_MAX)<<endl; // it will overflow into the min number
        cout<<INT_MIN<<endl;
        cout<<(int)(INT_MAX+2)<<endl;
        cout<<(int)(INT_MIN+1)<<endl;
        cout<<(int)(INT_MAX+INT_MAX); */
    /*
    long long int belongs to -2^(63) to 2^(63)-1
    2^(63) is a bit larger than 9*10^18
    long long int = long long (equivalent)
    float/double/long double = 7 digits / 15 digits/ 18 digits
    */
    //    setprecision() helps inbuilt cpp method used to manipulate precision of floating point values in cpp
    /*     double d = 18.38923829849;
        cout << d << endl; // this will give a rounded decimal upto 4 places
        cout << fixed << setprecision(11) << d; */
    //    fixed is a keyword
    // this is the way to use the set precision method
    /*     long long bigNum = 1234567890123456789;
        double floatingPoint = bigNum;
        cout << "Big number : -  " << bigNum << endl;
        cout << "Stored in double without precision : - " << floatingPoint << endl;
        cout << "Stored in precision : - " << fixed << setprecision(4) << floatingPoint; */
    /*     cout<<fixed<<setprecision(11); // since this is used hence after this it will all have precision upto 11 digits
        cout<<1e2 <<"\n";
        cout<<1e-7 <<"\n"; */
    // can't return a value in a void function
    Func_Name();
    return 0;
}