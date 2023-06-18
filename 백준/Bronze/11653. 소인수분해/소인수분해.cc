#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int start = 2;
    while(N != 1) {
        if(N % start == 0) {
            cout << start << "\n";
            N /= start;
        } else {
            start++;
        }
    }

    return 0;
}
