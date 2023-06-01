#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, X;
string temp;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> N;
    for (int i = 0; i < N;i++) {
        std::cin >> temp;
        if (temp == "push")
        {
            std::cin >> X;
            v.push_back(X);
        }
        else
        {
            if (temp == "pop")
            {
                if (v.size() == 0)
                    std::cout << -1 << "\n";
                else
                {
                    std::cout << v.back() << "\n";
                    v.pop_back();
                }
            }
            else if (temp == "size")
            {
                std::cout << v.size() << "\n";
            }
            else if (temp == "empty")
            {
                if (v.empty())
                {
                    std::cout << 1 << "\n";
                }
                else if (!v.empty())
                {
                    std::cout << 0 << "\n";
                }
            }
            else if (temp == "top")
            {
                if (v.size() == 0)
                {
                    std::cout << -1 << "\n";
                }
                else
                {
                    std::cout << v.back() << "\n";
                }
            }
        }
    }

    return 0;
}