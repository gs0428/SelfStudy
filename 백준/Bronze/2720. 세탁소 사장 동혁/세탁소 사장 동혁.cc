#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int money[4] = {25, 10, 5, 1};
    int T;
    cin >> T;
    for(int i = 0;i<T;i++) {
        int changes[4] = {0, 0, 0, 0};
        int pay;
        int k = 0;
        cin >> pay;
        while(pay != 0) {
            if(pay < money[k]) {
                k++;
                continue;
            }
            else {
                changes[k] = pay / money[k];
                pay %= money[k];
                k++;
            }
        }
        for(int j = 0;j<4;j++)
            cout << changes[j] << " ";
        cout << "\n";
    }

    return 0;
}
