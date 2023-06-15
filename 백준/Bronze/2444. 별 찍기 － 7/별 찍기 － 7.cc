#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int total = 2*n-1;

    for(int i = 0;i<total;i++) {
            int times = i > total / 2 ?  2*(total - i) - 1 : 2*(i+1) - 1;
            for(int k = 0;k<(total-times)/2;k++)
                cout << " ";
            for(int k = 0;k<times;k++)
                cout << "*";
            cout << "\n";
    }

    return 0;
}
