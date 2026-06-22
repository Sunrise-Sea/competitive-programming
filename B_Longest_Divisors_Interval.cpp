#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        // n - given number, [l,r] some intervale, i in this is -> N%i=0
        // 990990 =N hence [9,11] hence N%9 = 0 N%10 =0 N%11
        // if you run a loop until 50 you already get around 4* 1e8 hence not more than 50 times --> this is reverse engineering
        int t;
        cin>>t;
        while (t--)
        {
            ll n;
            cin>>n;
            int i = 1;
            while (n%i==0)
            {
                i++;
            }
            cout<<i-1<<"\n";
        }
        
    }
    
    
    return 0;
}
// what is asked to you also opens up a lot of possibilities, 
// like they said to print interval not a unique interval hence means there may or may not be multiple answers.
// hence if we take the smallest
//hence say 9,10,11
// s1,s2,s3 hence 
// l,l+1,l+2,l+3,...,r
/* 
s1 = 1 because it always divides 
s2 = 2 hence atleast one number in [l,r] is bound to give %s2 = 0
since modulo is cyclic hence similar for s3 = 3

hence we do a while similarly from 1 to n
until it divides.
hence lcm of all those is n itself if we have max interval. because coprime consec ints
hence check until those numbers product <=10^18

*/