#include <iostream>

using namespace std;

int main()
{
    // for and while loops are entry controlled
    //  do while is exit controlled

    /*
        s1
         while (s2)
        {
        // s3- more dynamic s3 - while gives us the power the place s3 statement anywhere while in for loop we are limited to being in the bracket
        } */
    /*     do
        {
          do this once
          then check if the condition is true
        } while (); */
    // string s = "jsdlk";
    // cout << (int)s.find('z');
    // size of array can't be changed
    // if we mistakenly declare a loop to run in 6 places in a 5 element array - we get segmentation fault or out of bounds
/*     int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans *= i;
    }
    cout<<ans<<endl; */
    // vectors are way more versatile than arrays
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
/*     int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = max(ans, a[i]);
    }
    cout<<ans<<endl;
    cout<<INT_MIN; // the lowest value an integer can store
    cout<<INT_MAX; // the highest value an integer can store */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<a[i]<< " " << a[j]<<endl;
        }
        
    }
    
    return 0;
}
// mmmmmmmmmm
