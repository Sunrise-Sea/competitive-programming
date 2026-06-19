#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll A, B, C, D;
    cin >> A >> B >> C >> D;
    ll difference = B - A + 1;
    ll A_C = A + (C - A % C);
    ll B_C = B - B % C;
    ll A_D = A + (D - A % D);
    ll B_D = B - B % D;
    ll A_CD = A + (((C * D) / gcd(C, D)) - A % ((C * D) / gcd(C, D)));
    ll B_CD = B - B % ((C * D) / gcd(C, D));
    if (A % C == 0)
    {
        A_C = A;
    }
    if (B % C == 0)
    {
        B_C = B;
    }
    if (A % D == 0)
    {
        A_D = A;
    }
    if (B % D == 0)
    {
        B_D = B;
    }
    if (A % ((C * D) / gcd(C, D)) == 0)
    {
        A_CD = A;
    }
    if (B % ((C * D) / gcd(C, D)) == 0)
    {
        B_CD = B;
    }
    cout << difference - (((B_C - A_C) / C) + 1) - (((B_D - A_D) / D) + 1) + (((B_CD - A_CD) / ((C * D) / gcd(C, D))) + 1) << "\n";

    return 0;
}