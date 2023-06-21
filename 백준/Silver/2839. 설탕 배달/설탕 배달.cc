#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


int Div3(int N, int cnt) {
    if(N % 3 != 0)
        return -1;
    else {
        cnt += N/3;
        return cnt;
    }
}

int Div5(int N) {
    int cnt = N / 5;
    int non = 0;
    int min = 5000;

    for(int i = 0;i<=cnt;i++) {
        int temp = Div3(N - (5 * i), i);
        if(temp == -1)
            non++;
        else {
            if(temp < min)
                min = temp;
        }
    }

    if(non == cnt + 1)
        return -1;
    else
        return min;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;
    cout << Div5(N);

    return 0;
}
