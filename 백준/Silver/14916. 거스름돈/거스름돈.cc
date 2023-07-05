#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

int Div2(int num, int cnt) {
    if(num % 2 == 1)
        return -1;
    else
        return cnt + (num / 2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    if (n == 1 || n == 3) {
        cout << -1;
        return 0;
    }
    int min = 100000;
    int repeat = n / 5;
    for (int i = 0; i <= repeat; i++) {
        int tmp = Div2(n - (5 * i), i);
        if(tmp == -1) {
            continue;
        } else if(tmp < min) {
            min = tmp;
        }
    }

    cout << min;

    return 0;
}