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

    while(true) {
        string name;
        int age, kg;
        cin >> name >> age >> kg;
        if(name == "#" && age == 0 && kg == 0)
            break;

        if(age > 17 || kg >= 80)
            cout << name << " " << "Senior\n";
        else
            cout << name << " " << "Junior\n";
    }

    return 0;
}
