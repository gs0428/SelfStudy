#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(true) {
        int N;
        cin >> N;
        if(N == -1)
            break;

        vector<int> v;
        int total = 0;
        for(int i = 1;i<=N/2;i++) {
            if(N % i == 0) {
                v.push_back(i);
                total += i;
            }
        }

        if(total == N) {
            cout << N << " = " << v[0];
            for(int i = 1;i<v.size();i++) {
                cout << " + " << v[i];
            }
            cout << "\n";
        } else {
            cout << N << " is NOT perfect." << "\n";
        }
    }

    return 0;
}
