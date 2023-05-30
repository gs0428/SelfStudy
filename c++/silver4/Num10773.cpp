#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int K, temp;
int total = 0;
vector<int> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> K;
    for (int i = 0; i < K;i++) {
        std::cin >> temp;
        if(temp == 0)
            v.pop_back();
        else
            v.push_back(temp);
    }
    for (int i = 0; i < v.size();i++) 
        total += v[i];

    std::cout << total;

    return 0;
}