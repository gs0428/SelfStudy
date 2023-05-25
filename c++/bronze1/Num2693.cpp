#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    std::cin >> T;
    for (int i = 0; i < T; i++) {
        int temp;
        vector<int> v;
        for (int k = 0; k < 10; k++) {
            std::cin >> temp;
            v.push_back(temp);
        }
        sort(v.rbegin(), v.rend());
        std::cout << v[2] << "\n";
    }

    return 0;
}