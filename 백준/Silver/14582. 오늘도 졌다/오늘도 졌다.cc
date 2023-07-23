#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> JSum(9, 0);
    vector<int> GSum(9, 0);
    bool win = false;
    int score;

    cin >> score;
    JSum[0] += score;
    if(JSum[0] > 0)
        win = true;
    for (int i = 1; i < 9; i++) {
        cin >> score;
        JSum[i] += score + JSum[i - 1];
    }

    cin >> score;
    GSum[0] += score;
    for (int i = 1; i < 9; i++) {
        cin >> score;
        GSum[i] += score + GSum[i - 1];
        if(JSum[i] > GSum[i - 1])
            win  = true;
    }

    if(win && (GSum.back() > JSum.back())) {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}