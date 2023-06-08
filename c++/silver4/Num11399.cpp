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

    int N;
    int sum[1001] = {};
    std::cin >> N;
    vector<int> v(N+1, 0);

    for (int i = 1; i <= N;i++) 
        std::cin >> v[i];

    sort(v.begin(), v.end());
    int total = 0;

    for (int i = 1; i <= N;i++) {
        sum[i] = sum[i - 1] + v[i];
        total += sum[i];
    }

    std::cout << total;

    return 0;
}