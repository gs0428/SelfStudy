#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    std::cin >> N;
    vector<int> v;
    vector<int> symbol; // +, -, *, / 순서
    int temp;
    for (int i = 0; i < N; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    for (int i = 0; i < 4; i++) {
        std::cin >> temp;
        symbol.push_back(temp);
    }

    return 0;
}
