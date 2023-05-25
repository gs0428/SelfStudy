#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    std::cin >> N;
    int num; 
    int ans = 0;
    for (int i = 0; i < N; i++) {
        std::cin >> num;
        if (num == 1)
            continue;
        else {
            int cnt = 0;
            for (int k = 1; k <= num; k++) {
                if (num % k == 0) {
                    cnt++;   
                    if (cnt > 2)
                        break;
                }
            }
            if (cnt == 2)
                ans++;
        }
    }
    std::cout << ans;

    return 0;
}