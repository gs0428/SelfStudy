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

    vector<bool> self(10001, true);
    for (int i = 1; i <= 10000; i++) {
        int sum = i;
        int temp = i;
        if(self[i])
            cout << i << "\n";
        while(temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        if(sum > 10000)
            continue;

        self[sum] = false;
    }

    return 0;
}
