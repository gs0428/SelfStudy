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

    int N;
    cin >> N;
    if (N == 1) {
        cout << 4;
        return 0;
    } else if (N == 2) {
        cout << 6;
        return 0;
    } else {
        vector<int> v;
        v.push_back(1);
        v.push_back(1);
        v.push_back(2);
        for (int i = 3; i < N; i++) {
            v.push_back(v[i - 1] + v[i - 2]);
        }
        int row = v[v.size() - 1] + v[v.size() - 2];
        int col = v[v.size() - 1];
        int area = 2 * row + 2 * col;

        cout << area;
    }

    return 0;
}
