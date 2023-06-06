#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int num[1025][1025];
int sum[1025][1025] = {};
int N, M;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    std::cin >> N >> M;
    for (int i = 1; i <= N;i++) {
        for (int k = 1; k <= N;k++) {
            std::cin >> num[i][k];
            sum[i][k] = sum[i][k-1] + num[i][k];
        }
    }
    for (int i = 1; i <= M;i++) {
        int total = 0;
        int x1, y1, x2, y2;
        std::cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == x2 && y1 == y2)
            std::cout << num[x1][y1] << "\n";
        else {
            for (int k = x1; k <= x2;k++) {
                total += sum[k][y2] - sum[k][y1 - 1];
            }
            std::cout << total << "\n";
        }
    }

        return 0;
}