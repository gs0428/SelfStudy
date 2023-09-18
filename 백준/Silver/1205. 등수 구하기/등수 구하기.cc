#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int scores, newScore, rank;
    cin >> scores >> newScore >> rank;
    vector<int> v(100, 0);
    for (int i = 0; i < scores; i++) {
        cin >> v[i];
    }
    int cnt = 0;
    int curRank = 1;
    for (int i = 0; i < scores; i++) {
        if (newScore < v[i]) {
            curRank++;
        } else if (newScore == v[i]) {
            curRank = curRank;
        } else {
            break;
        }
        cnt++;
    }

    if (cnt == rank) {
        curRank = -1;
    } else if (scores == 0) {
        curRank = 1;
    }

    cout << curRank;

    return 0;
}