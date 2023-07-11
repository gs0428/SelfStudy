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

    int n, tmp;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        v.push_back(tmp);
    }
    for (int i = 1; i < n; i++) {
        if (v[0] % v[i] == 0) {
            cout << v[0] / v[i] << "/" << 1 << "\n";
        } else if (v[i] % v[0] == 0) {
            cout << 1 << "/" << v[i] / v[0] << "\n";
        } else {
            int num = 2;
            int a = v[0];
            int b = v[i];
            while (1) {
                if (a == num || b == num) {
                    break;
                }
                if (a % num == 0 && b % num == 0) {
                    a /= num;
                    b /= num;
                } else {
                    num++;
                }
            }
            cout << a << "/" << b << "\n";
        }
    }

    return 0;
}
