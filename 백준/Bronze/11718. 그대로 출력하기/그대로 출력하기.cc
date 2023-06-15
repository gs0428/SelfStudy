#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);


    string str;
    while (true){
        getline(cin, str);
        if (str=="")
            break;
        cout << str << endl;
    }
    return 0;
}
