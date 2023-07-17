#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <deque>
#include <set>
#include <string>
using namespace std;

unsigned long long int Euc(unsigned long long int a, unsigned long long int b)
{
    int r = a % b;
    if (r == 0) {
        return b;
    }
    return Euc(b, r);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, tmp;
    cin >> n;
    cin >> tmp;
    int max = tmp;
    int min = tmp;
    for (int i = 1; i < n; i++) {
        cin >> tmp;
        if(max < tmp)
            max = tmp;
        else if(min > tmp)
            min = tmp;
    }

    cout << min * max;



    return 0;
}