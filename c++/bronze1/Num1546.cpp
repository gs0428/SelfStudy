#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int N;
double temp;
vector<double> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> N;
    for (int i = 0; i < N;i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    double M = v[v.size() - 1];
    double avg = 0;

    for (int i = 0; i < N;i++) {
        avg += v[i] / M * 100;
    }

    std::cout << avg / N;

    return 0;
}