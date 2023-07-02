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

    int E, S, M;
    cin >> E >> S >> M;
    int num = 1;
    while(1) {
        int e = num % 15 == 0 ? 15 : num % 15;
        int s = num % 28 == 0 ? 28 : num % 28;
        int m = num % 19 == 0 ? 19 : num % 19;
        if (e == E && s == S && m == M) {
            cout << num;
            break;
        }
        num++;
    }

    return 0;
}