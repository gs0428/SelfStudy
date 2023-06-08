#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    vector<int> v;
    std::cin >> N >> M;
    for (int i = 0; i < N;i++) {
        int temp;
        std::cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    int start = 0, end = v.size() - 1, cnt = 0;
    while (true)
    {
        int sum = v[start] + v[end];
        if (sum > M)
        {
            end--;
        }
        else if (sum < M)
        {
            start++;
        }
        else if (sum == M)
        {
            cnt++;
            start++;
            end--;
        }

        if( start >= end)
            break;
    }

    std::cout << cnt;

    return 0;
}