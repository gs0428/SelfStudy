#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N, M, V, temp1, temp2;
bool visited[1001];
vector<int> v[10001];

void DFS(int V) {
    if(visited[V] == true)
        return;
    visited[V] = true;
    std::cout << V << " ";
    for (int i = 0; i < v[V].size(); i++)
    {
        DFS(v[V][i]);
    }
}

void BFS(int V) {   // 다시보기
    queue<int> q;
    q.push(V);
    visited[V] = true;

    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        std::cout << cur << " ";
        for (int i = 0; i < v[cur].size();i++) {
            int next = v[cur][i];
            if(!visited[next]) {
                q.push(next);
                visited[next] = true;
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> N >> M >> V;
    
    for (int i = 0; i < M; i++)
    {
        std::cin >> temp1 >> temp2;
        v[temp1].push_back(temp2);
        v[temp2].push_back(temp1);
        sort(v[temp1].begin(), v[temp1].end());
        sort(v[temp2].begin(), v[temp2].end());
    }
    DFS(V);
    fill_n(visited, 1001, false);
    std::cout << "\n";
    BFS(V);

    return 0;
}