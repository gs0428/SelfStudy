#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
int temp;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (int i = 0; i < 3;i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int total = 0;
    while (true)
    {
        if(v[2] >= v[0] + v[1])
            v[2]--;
        else {
            for (int i = 0; i < 3;i++) 
                total += v[i];
            break;
        }
    }

    std::cout << total;

    return 0;
}