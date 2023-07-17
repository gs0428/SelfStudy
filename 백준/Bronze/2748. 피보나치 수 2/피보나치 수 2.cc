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

    int n;
    cin >> n;
    if(n == 0)
        cout << 0;
    else if(n == 1)
        cout << 1;
    else{
        long long int sum;
        long long int l = 1, r = 0;
        for (int i = 2; i <= n; i++) {
            sum = l + r;
            r = l;
            l = sum;
        }
        cout << sum;
    }

    return 0;
}