#include <bits/stdc++.h>
#define ll long long

using namespace std;

int hours_to_minutes(int sleep_h, int sleep_m, int final_hours, int final_minutes)
{
    if ((final_hours - sleep_h) * 60 + final_minutes - sleep_m >= 0)
    {
        return (final_hours - sleep_h) * 60 + final_minutes - sleep_m;
    }
    else
    {
        return 24 * 60 + (final_hours - sleep_h) * 60 + final_minutes - sleep_m;
    }
}
void timify(int duration)
{
    cout << (int)(duration / 60) << " " << (int)(duration % 60) << "\n";
    // cout<<duration;
}
int main()
{

    int t, n, H, M;
    int minimum_duration = 24 * 60;
    cin >> t;
    for (int test_cases = 0; test_cases < t; test_cases++)
    {
        minimum_duration = 24 * 60;
        cin >> n >> H >> M;
        int hour_minute[n][2];
        for (int time_i = 0; time_i < n; time_i++)
        {
            for (int actual_time = 0; actual_time < 2; actual_time++)
            {
                cin >> hour_minute[time_i][actual_time];
            }
        }
        for (int time = 0; time < n; time++)
        {
            if (minimum_duration >= hours_to_minutes(H, M, hour_minute[time][0], hour_minute[time][1]))
            {
                minimum_duration = hours_to_minutes(H, M, hour_minute[time][0], hour_minute[time][1]);
            }
        }
        timify(minimum_duration);
    }

    return 0;
}