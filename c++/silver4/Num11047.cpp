#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, K;
    std::cin >> N >> K;
    vector<int> v(N, 0);
    for (int i = 0; i < N; i++)
        std::cin >> v[i];

    int k = N - 1;
    int cnt = 0;
    while (K != 0)
    {
        if(v[k] > K)
            k--;
        else {
            cnt += K / v[k];
            K %= v[k];
        }
    }

    std::cout << cnt;

    return 0;
}