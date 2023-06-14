#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string A, B;
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    int a = stoi(A);
    int b = stoi(B);

    if(a>b)
        cout << a;
    else
        cout << b;
    return 0;
}
