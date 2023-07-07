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
    if(N < 100) {
        cout << N;
        return 0;
    } else {
        int ans = N;
        for (int i = 100; i <= N; i++) {
            int num = i;
            vector<int> v;
            while(num != 0) {
                v.push_back(num % 10);
                num /= 10;
            }
            int gap = v[1] - v[0];
            for (int k = 1; k< v.size() - 1; k++) {
                if (v[k + 1] - v[k] != gap) {
                    ans--;
                    break;
                }
            }
        }
        cout << ans;
    }

    return 0;
}
