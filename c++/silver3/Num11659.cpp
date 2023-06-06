#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, i, j;
int num[100000];
int sum[100000] = {0};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> N >> M;

    for (int i = 0; i < N;i++) {
        std::cin >> num[i];
        sum[i] += i == 0 ? num[i] : sum[i - 1] + num[i];
    }
    for (int k = 0; k < M;k++) {
        std::cin >> i >> j;
        if(i == 1) 
            std::cout << sum[j - 1]<< "\n";
        else
            std::cout << sum[j - 1] - sum[i - 2] << "\n";
    }

        return 0;
}