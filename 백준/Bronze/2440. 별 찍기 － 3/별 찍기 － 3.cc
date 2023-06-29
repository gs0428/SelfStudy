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

    int a;
    cin >> a;
    for (int i = a; i >= 1; i--) {
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
