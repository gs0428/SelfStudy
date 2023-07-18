#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

int Com(int a, int b) {
    int top = 1, bot = 1;
    for (int i = 0; i < b; i++) {
        top *= a;
        a--;
        bot *= i + 1;
    }
    return top / bot;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T, num;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> num;
        int num_1 = 0, num_2 = 0, num_3 = 0, ans = 0;
        int tmp, temp, repeat;
        for (int k = 0; k <= num; k++) {
            temp = num - (k * 1);
            num_1 = k;
            repeat = temp / 2;
            for (int j = 0; j <= repeat; j++) {
                tmp = temp - (2 * j);
                num_2 = j;
                if(tmp % 3 != 0) {
                    continue;
                } else {
                    num_3 = tmp / 3;
                    int total = num_1 + num_2 + num_3;
                    int mul = 1;
                    if(num_1 != 0) {
                        mul *= Com(total, num_1);
                    }
                    total -= num_1;
                    if(num_2 != 0) {
                        mul *= Com(total, num_2);
                    }
                    total -= num_2;
                    if(num_3 != 0) {
                        mul *= Com(total, num_3);
                    }
                    ans += mul;
                }
            }
        }
        cout << ans << "\n";
    }


    return 0;
}