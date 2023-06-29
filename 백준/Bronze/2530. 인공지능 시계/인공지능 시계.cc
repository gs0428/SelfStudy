#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int h, m, s, time;
    cin >> h >> m >> s >> time;

    int hour = time / 3600;
    time %= 3600;
    int minute = time / 60;
    time %= 60;
    int second = time;

    s += second;
    if(s >= 60) {
        minute += s / 60;
        s %= 60;
    }

    m += minute;
    if (m >= 60) {
        hour += m / 60;
        m %= 60;
    }

    h += hour;
    if (h >= 24) {
        h %= 24;
    }

    cout << h << " " << m << " " << s;

    return 0;
}
