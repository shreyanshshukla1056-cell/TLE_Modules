#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0 ; i < t ; i++) {
        int n, H, M;
        cin >> n >> H >> M;
        int bed_time = H * 60 + M;
        int min_sleep = 24 * 60; // maximum possible wait

        for (int j = 0; j < n; j++) {
            int h, m;
            cin >> h >> m;
            int alarm_time = h * 60 + m;

            int sleep_time = alarm_time - bed_time;
            if (sleep_time < 0) sleep_time += 24 * 60;

            min_sleep = min(min_sleep, sleep_time);
        }

        int hours = min_sleep / 60;
        int minutes = min_sleep % 60;

        cout << hours << " " << minutes << endl;
    }

    return 0;
}
