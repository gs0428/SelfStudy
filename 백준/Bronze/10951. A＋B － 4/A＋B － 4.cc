#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while(true) {
        int a,b;
        cin >> a >> b;
        if(cin.eof() == true)
            break;
        cout << a + b << "\n";
    }

    return 0;
}
