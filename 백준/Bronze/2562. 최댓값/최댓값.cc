#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int max = 0, loc = 0;
    for(int i =0;i<9;i++) {
        int temp;
        cin >> temp;
        if(temp > max) {
            max = temp;
            loc = i + 1;
        }
    }
    cout << max << "\n" << loc;

    return 0;
}
