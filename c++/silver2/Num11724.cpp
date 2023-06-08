#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;

bool visited[1001];
vector<int> v[1001];


void DFS(int num) {
    if(visited[num])
        return;
    visited[num] = true;
    for(int i : v[num]) {
        if(!visited[i])
            DFS(i);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N, M;
    int cnt = 0;
    std::cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int f, s;
        std::cin >> f >> s;
        v[f].push_back(s);
        v[s].push_back(f);
    }
    for (int i = 1; i <= N;i++) {
        if(!visited[i]){
            DFS(i);
            cnt++;
        }
    }

    std::cout << cnt;

    return 0;
}