#include <bits/stdc++.h>
#define ll long long

using namespace std;
vector<int> factors(int n)
{
    vector<int> facts;
    for (ll d = 2; d * d <= n; d++)
    {
        while (n % d == 0)
        {
            facts.push_back(d);
            n/=d;
        } // since n is being manipulated itself and n is also the one that the loop depends on
    }
    if (n>1) // if not fully breakable (if at end something gets left AND it is prime then hence if n still >1 then pushback it again because that means some factor is still present because if the left out protion was composite IT MUST HAVE BEEN BROKEN DOWN IN THE WHILE LOOP BUT IT DIDNT)
    {
        facts.push_back(n);
    }
    
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> thefacts = factors(n);
    return 0;
}