#include <iostream>

using namespace std;

int main()
{
    int cards[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> cards[i];
    }
    int all_num_track[13][2];
    for (int i = 1; i <= 13; i++)
    {
        all_num_track[i - 1][0] = i;
        all_num_track[i - 1][1] = 0;
    }

    for (int i = 1; i <= 13; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (cards[j] == all_num_track[i - 1][0])
            {
                all_num_track[i - 1][1] += 1;
            }
        }
    }
    int condition_3 = 0;
    int condition_2 = 0;
    for (int i = 0; i < 13; i++)
    {
        if (all_num_track[i][1] == 3 )
        {
            condition_3++;
        }
        if ( all_num_track[i][1] == 2)
        {
            condition_2++;
        }
        
    }
    if (condition_3==1&&condition_2==1)
    {
        cout<<"Yes"<<"\n";
    }
    else
    {
        cout<<"No"<<"\n";
    }
    
    

    return 0;
}