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

    int N, temp;
    int num[1000];
    std::cin >> N;
    for (int i = 0; i < N;i++) {
        std::cin >> num[i];
    }
    if(N == 1){
        std::cout << num[0];
        return 0;
    }
    for (int i = N; i > 0; i--)
    {
        for (int k = 0; k < i;k++) {
            int j = k == N - 1 ? k - 1 : k;
            if (num[j] > num[j + 1])
            {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }

    for (int i = 0; i < N;i++)
        std::cout << num[i] << "\n";

        return 0;
}