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

    int days, A, B, C, D;
    cin >> days >> A >> B >> C >> D;
    int A_days = A % C == 0 ? A / C : (A / C) + 1;
    int B_days = B % D == 0 ? B / D : (B / D) + 1;
    int big = A_days > B_days ? A_days : B_days;

    cout << days - big;

    return 0;
}
