#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, cnt = 0;
    vector<int> v;
    std::cin >> N;
    for (int i = 0; i < N;i++) {
        int temp;
        std::cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    if(N <= 2) {
        std::cout << 0;
        return 0;
    }

        for (int i = 0; i < N;i++) {
            int num = v[i];
            int start = 0, end = v.size() - 1;
            while(true) {
                if(v[start] + v[end] > num)
                    end--;
                else if(v[start] + v[end] < num)
                    start++;
                else if(start == i) {
                    start++;
                } else if(end == i) {
                    end--;
                }
                else if(v[start] + v[end] == num) {
                    cnt++;
                    break;
                }

                if(start >= end)
                    break;
            }
        }

        std::cout << cnt;

        return 0;
}