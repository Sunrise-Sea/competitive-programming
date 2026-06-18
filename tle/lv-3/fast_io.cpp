#include <bits/stdc++.h>
#define ll long long
// #define s ios::sync_with_stdio(false)
using namespace std;

int main()
{

    // Trick for fast input and output while doing questions
    // in order to avoid TLE's
    // can use printf in CPP as well
    ios::sync_with_stdio(false);
    // removes sync of I/O in C++ world if you synchronize you have a guarantee that all orders of I/O are exactly what you would expect
    cin.tie(NULL);
    // likewise it removes the sync between cin and cout as well
    /*     printf("3\n");
        printf("2\n"); */
    /*     cout << 4 << "\n";
        cout << 5 << "\n"; */
    int a;
    int b;
    // Compiler has extra load of maintaining sync between cout and printf but we removed that hence the output is not as expected
    // but in competitive programming we give inputs all at once hence no need to maintain sync between cout and cin
    // we can just take input in the beginning itself hence we take that load off of the compiler
    // hence by removing that load we save in input and output
    cin >> a;
    cout << "Hell";
    cin >> b;
    /* 
    endl vs "\n"
    endl inserts a new line and flushes the entire stream (output buffer) where as "\n" just inserts a new line
    flushing the buffer means clearing the output buffer by forcing the contents to be rewritten to the output stream immediately
    Essentially endl travels over the entire line and then goes to the next line (process is called flushing)
    and "\n" jumps straight up to the new line hence for cp it is obvious that "\n" is faster
    */
    return 0;
}