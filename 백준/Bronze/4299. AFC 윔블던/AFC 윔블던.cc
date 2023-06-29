#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int sum, gap;
    cin >> sum >> gap;

    int repeat = sum / 2;

    for (int i = 0; i <= repeat; i++) {
        int a = i;
        int b = sum - i;
        if(b - a == gap) {
            cout << b << " " << a;
            return 0;
        }
    }

    cout << -1;

    return 0;
}
