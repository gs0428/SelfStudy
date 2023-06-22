#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<pair<int, int>> v;
    for (int i = 0; i < 2; i++) {
        int top, bottom;
        cin >> top >> bottom;
        v.push_back(make_pair(top, bottom));
    }

    int big = v[0].second > v[1].second ? v[0].second : v[1].second;

    vector<bool> deleted(big + 1, false);
    vector<int> temp;
    for (int i = 2; i <= sqrt(big); i++) {
        if (deleted[i])
            continue;
        for (int k = i * 2; k <= big; k += i) {
            deleted[k] = true;
        }
    }

    for (int i = 2; i <= big; i++) {
        if(!deleted[i])
            temp.push_back(i);
    }

    int top = v[0].second * v[1].first + v[0].first * v[1].second;
    int bottom = v[0].second * v[1].second;
    int num = 0;
    int min = top < bottom ? top : bottom;

    while(num != temp.size()) {
        if(top % temp[num] == 0 && bottom % temp[num] == 0) {
            top /= temp[num];
            bottom /= temp[num];
        }
        else
            num += 1;
    }

    cout << top << " " << bottom;

    return 0;
}
