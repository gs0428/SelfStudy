#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    std::cin >> N;
    int start = 1, end = 1, sum = 1, cnt = 1;
    while (end != N) {
        if(sum < N) {
            end++;
            sum += end;
        } else if(sum > N) {
            sum -= start;
            start++;
        }
        else if(sum == N)
        {
            cnt++;
            end++;
            sum += end;
        }
    }

    std::cout << cnt;
    return 0;
}