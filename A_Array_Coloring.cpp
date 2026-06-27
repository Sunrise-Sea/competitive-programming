#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t, n, even = 0;
    cin >> t;
    while (t--)
    {
        cin >> n;
        even = 0;
        int color[n];
        for (int i = 0; i < n; i++)
        {
            cin >> color[i];
            // if (color[i])
            // {
            //     /* code */
            // }
            // testing to see if this slick method works
            even += (int)(color[i] % 2 == 0);
        }
        // cout<<even<<" "<<n-even<<"  ";//let's devise some condition solely using the number of evens and odds since all we care about is pairity
        //hmm odds are the only things that change the pairity so they are the ones that should be needed to be equally distributed
        //so ig odds%2=0? well let's check this
        if ((n-even)%2==0)
        {
            cout<<"YES"<<"\n";
        }
        else
        {
            cout<<"NO"<<"\n";
        }
        
        
    }

    return 0;
}