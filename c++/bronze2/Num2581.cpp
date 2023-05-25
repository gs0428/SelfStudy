#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N;
    std::cin >> M >> N;
    vector<int> v;
    int cnt = 0;

    for (M; M <= N; M++) {
        if (M == 1)
            continue;
        int min = 0;
        for (int i = 1; i <= M; i++) {
            
            if (M % i == 0) {
                min++;
            }
                
            if (min > 2)
                break;
        }
        if (min <= 2) {
            v.push_back(M);
            cnt++;
        }
    }

    if (cnt == 0)
        std::cout << -1;
    else {
    int min = v[0];
    int total = 0;

    for (int i = 0; i < v.size(); i++) 
        total += v[i];
    
    std::cout << total << "\n" << min;
    }

    return 0;
}