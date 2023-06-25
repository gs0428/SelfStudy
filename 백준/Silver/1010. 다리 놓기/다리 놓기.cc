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

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, M;
        cin >> N >> M;
        N = M - N > N ? N : M - N;

        long long top = 1;
        for (int k = M; k >= M - N + 1; k--) {
            top *= k;
        }

        long long bottom = 1;
        for (int k = N; k >= 1; k--) {
            bottom *= k;
        }

        cout << top / bottom << "\n";
    }



    return 0;
}
