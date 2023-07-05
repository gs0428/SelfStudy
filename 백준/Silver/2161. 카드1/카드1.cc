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

    queue<int> q;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    for (int i = 0; i < n - 1; i++) {
        cout << q.front() << " ";
        q.pop();
        int tmp = q.front();
        q.pop();
        q.push(tmp);
    }
    cout << q.front();


    return 0;
}