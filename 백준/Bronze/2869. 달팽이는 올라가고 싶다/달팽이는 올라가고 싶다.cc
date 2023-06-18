#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int up, slip, height;
    cin >> up >> slip >> height;

    int day = (height - up) / (up - slip) + 1;

    if((height - up) % (up - slip) != 0)
        day++;
    if(up == height)
        cout << 1;
    else
        cout << day;



    return 0;
}
