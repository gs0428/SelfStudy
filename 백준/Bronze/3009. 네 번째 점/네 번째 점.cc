#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, int>> axis;

    for(int i = 0;i<3;i++) {
        int tempX, tempY;
        cin >> tempX >> tempY;
        axis.push_back(make_pair(tempX, tempY));
    }
    int ansX, ansY;

    if(axis[0].first == axis[1].first)
        ansX = axis[2].first;
    else if(axis[2].first == axis[1].first)
        ansX = axis[0].first;
    else if(axis[0].first == axis[2].first)
        ansX = axis[1].first;

    if(axis[0].second == axis[1].second)
        ansY = axis[2].second;
    else if(axis[2].second == axis[1].second)
        ansY = axis[0].second;
    else if(axis[0].second == axis[2].second)
        ansY = axis[1].second;

    cout << ansX << " " << ansY;

    return 0;
}
