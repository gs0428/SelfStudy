#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<int> res(42,0);
    for(int i = 0;i<10;i++) {
        int temp;
        cin >> temp;
        res[temp % 42]++;
    }
    int cnt = 0;
    for(int i = 0;i<42;i++) {
        if (res[i] != 0) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}
