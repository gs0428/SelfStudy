#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

vector<int> num[101];
vector<bool> visited(101, false);
int cnt = 0;

void DFS(int a) {
    if(visited[a])
        return;

    visited[a] = true;
    cnt++;
    for (int i = 0; i < num[a].size(); i++) {
        DFS(num[a][i]);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        num[a].push_back(b);
        num[b].push_back(a);
    }

    DFS(1);

    cout << cnt - 1;

    return 0;
}