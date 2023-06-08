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

    string N;
    std::cin >> N;
    for (int i = 0; i < N.length() - 1;i++) {
        int loc = i;
        int max = 0;
        for (int k = i; k < N.length(); k++)
        {
            if(N[k]- '0' > max) {
                max = N[k] - '0';
                loc = k;
            }
        }
        swap(N[i], N[loc]);
    }
    std::cout << N;

    return 0;
}