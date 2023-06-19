#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    cin >> N >> M;
    int max = 0;
    vector<int> v(N,0);
    for(int i = 0;i<N;i++)
        cin >> v[i];

    sort(v.begin(), v.end());
    for(int i = 0;i<N-2;i++) {
        for(int k = i+1;k<N-1;k++) {
            for(int j = k+1;j<N;j++) {
                int total = v[i] + v[k] + v[j];
                if(total < M) {
                    if(total > max)
                        max = total;
                } else if(total > M) {
                    break;
                } else if(total == M) {
                    max = total;
                    break;
                }
            }
            if(max == M)
                break;
        }
        if(max == M)
            break;
    }

    cout << max;

    return 0;
}
