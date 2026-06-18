#include <bits/stdc++.h>
using namespace std;

int main()
{

    int K;
    cin >> K;
    int hour_increment = K / 60;
    int minute_increment = K % 60;
    cout << 21 + hour_increment << ":";
    if (minute_increment < 10)
    {
        cout << "0" << minute_increment << endl;
    }
    else
    {
        cout << minute_increment << endl;
    }

    return 0;
}