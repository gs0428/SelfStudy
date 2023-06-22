#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for(int i = 0;i<T;i++) {
        long long int a, b;
        cin >> a >> b;
        
        int num = 2;
        long long int mul = a * b;
        long long int small = a < b ? a : b;

        while(true) {
            if(a % num == 0 && b % num == 0) {
                mul /= num;
                a /= num;
                b /= num;
            }
            else
                num += 1;

            if(num > small)
                break;
        }

        cout << mul << "\n";
    }
    
    

    return 0;
}
