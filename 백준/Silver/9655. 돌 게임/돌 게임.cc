#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <set>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int N;
    cin >> N;

    int num3 = N / 3;
    int num1 = N % 3;
    int sum = num3 + num1;

    if(sum % 2 == 0)
        cout << "CY";
    else
        cout << "SK";


    return 0;
}