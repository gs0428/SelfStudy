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
    std::cin >> N;
    vector<int> v(N, 0);
    for (int i = 0; i < N;i++) {
        std::cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < N;i++) {
        std::cout << v[i] << "\n";
    }

        return 0;
}