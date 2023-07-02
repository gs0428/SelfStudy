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

    long long int S;
    cin >> S;
    long long int n = 1;

    while(1) {
        long long int sum = (n * (n + 1)) / 2;
        if (sum > S) {
            n -= 1;
            break;
        }
        n++;
    }

    cout << n;

    return 0;
}