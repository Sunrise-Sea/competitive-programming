#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int judges[n];
    int easy_flag = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> judges[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (judges[i] == 1)
        {
            cout << "HARD" << "\n";
            easy_flag = 0;
            break;
        }
    }
    if (easy_flag)
    {
        cout<<"EASY"<<"\n";
    }
    // THIS ONE WAS EASY AND I DIN'T SOLVE IT IN THE VIRTUAL CONTEST WHAT AM I DOING WITH MY LIFE
    // actually on second thought Im doing nothing, I am worthless
    
    return 0;
}