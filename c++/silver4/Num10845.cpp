#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

queue<int> q;
string cmd;
int N, num;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> cmd;
        if (cmd == "push") {
            std::cin >> num;
            q.push(num);
        }
        else {
            if (cmd == "pop") {
                if (q.empty())
                    std::cout << -1 << "\n";
                else {
                    std::cout << q.front() << "\n";
                    q.pop();
                }
            }
            else if (cmd == "size")
                std::cout << q.size() << "\n";
            else if (cmd == "empty") {
                if (q.empty())
                    std::cout << 1 << "\n";
                else
                    std::cout << 0 << "\n";
            }
            else if (cmd == "front") {
                if (q.empty())
                    std::cout << -1 << "\n";
                else
                    std::cout << q.front() << "\n";
            }
            else if (cmd == "back") {
                if (q.empty()) 
                    std::cout << -1 << "\n";
                else
                    std::cout << q.back() << "\n";
            }
        }
    }

    return 0;
}