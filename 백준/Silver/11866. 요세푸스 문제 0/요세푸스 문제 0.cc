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

    int N, K;
    cin >> N >> K;
    if(N == 1 && K == 1) {
        cout << "<" << 1 << ">";
        return 0;
    }
    vector<bool> deleted(N, false);
    int loc = -1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            loc += 1;
            if(loc >= N)
                loc -= N;
            if(deleted[loc]) {
                j--;
                continue;
            }
        }
        deleted[loc] = true;
        if(i == 0)
            cout << "<" << loc + 1 << ", ";
        else if(i == N - 1)
            cout << loc + 1 << ">";
        else
            cout << loc + 1 << ", ";
    }

    return 0;
}
