#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    queue<int> q;

    std::cin >> N;

    for (int i = 1; i <= N;i++) {
        q.push(i);
    }
    while(q.size() > 2) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    std::cout << q.back();

    return 0;
}