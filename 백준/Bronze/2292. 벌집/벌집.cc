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
    int start = 1, cnt = 1;
    cin >> N;
    while(true) {
        if(N <= start) {
            cout << cnt;
            break;
        }
        start += cnt * 6;
        cnt++;
    }

    return 0;
}
