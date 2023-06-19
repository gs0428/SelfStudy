#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    for(int i = 1;i<=N;i++) {
        int total = 0;
        int num = i;
        while(num != 0) {
            total += num % 10;
            num /= 10;
        }
        if(i + total == N) {
            cout << i;
            return 0;
        }
    }

    cout << 0;

    return 0;
}
