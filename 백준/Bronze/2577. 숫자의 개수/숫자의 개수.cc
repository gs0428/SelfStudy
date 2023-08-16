#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long int num = 1;
    vector<int> v(10, 0);
    for (int i = 0; i < 3; i++) {
        int n;
        cin >> n;
        num *= n;
    }
    string ans = to_string(num);
    for (int i = 0; i < ans.length(); i++) {
        v[ans[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << v[i] << "\n";
    }



    return 0;
}