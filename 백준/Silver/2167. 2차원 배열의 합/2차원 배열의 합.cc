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

    int N, M, K, tmp;
    cin >> N >> M;
    vector<int> v[N];
    for (int i = 0; i < N; i++) {
        for (int k = 0; k < M; k++) {
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    cin >> K;
    for (int i = 0; i < K; i++) {
        int x1, y1, x2, y2;
        int ans = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int k = x1 - 1; k <= x2 - 1; k++) {
            for (int j = y1 - 1; j <= y2 - 1; j++) {
                ans += v[k][j];
            }
        }
        cout << ans << "\n";
    }

    return 0;
}