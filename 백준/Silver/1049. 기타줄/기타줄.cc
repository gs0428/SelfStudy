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

    int n, m;
    cin >> n >> m;
    vector<int> set;
    vector<int> sin;
    for (int i = 0; i < m; i++) {
        int setP, sinP;
        cin >> setP >> sinP;
        set.push_back(setP);
        sin.push_back(sinP);
    }
    sort(set.begin(), set.end());
    sort(sin.begin(), sin.end());
    int min = 100001;
    int div = n / 6;
    int res = n % 6;
    if(res == 0) {
        for (int i = div; i >= 0; i--) {
            int temp = set[0] * i + (6 * (div - i) * sin[0]);
            if(temp < min)
                min = temp;
        }
        cout << min;
    } else {
        for (int i = div; i >= 0; i--) {
            int temp = set[0] * i + (res + (6 * (div - i))) * sin[0];
            if(temp < min)
                min = temp;
        }
        int tmp = set[0] * (div + 1);
        if(min < tmp)
            cout << min;
        else
            cout << tmp;
    }

    return 0;
}