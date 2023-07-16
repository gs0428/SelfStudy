#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int a, b, ans;
    cin >> a >> b >> ans;
    if(a + b < 2 * ans)
        cout << a + b;
    else
        cout << a + b - ans * 2;

    return 0;
}