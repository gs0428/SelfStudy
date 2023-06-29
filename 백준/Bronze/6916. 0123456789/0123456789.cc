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

    int n;
    cin >> n;
    switch (n) {
        case 0:
            cout << " * * *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << " * * *" << "\n";
            break;
        case 1:
            cout << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            break;
        case 2:
            cout << " * * *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << " * * *" << "\n";
            cout << "*" << "\n";
            cout << "*" << "\n";
            cout << "*" << "\n";
            cout << " * * *" << "\n";
            break;
        case 3:
            cout << " * * *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << " * * *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << " * * *" << "\n";
            break;
        case 4:
            cout << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << " * * *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            break;
        case 5:
            cout << " * * *" << "\n";
            cout << "*" << "\n";
            cout << "*" << "\n";
            cout << "*" << "\n";
            cout << " * * *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << " * * *" << "\n";
            break;
        case 6:
            cout << " * * *" << "\n";
            cout << "*" << "\n";
            cout << "*" << "\n";
            cout << "*" << "\n";
            cout << " * * *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << " * * *" << "\n";
            break;
        case 7:
            cout << " * * *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            break;
        case 8:
            cout << " * * *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << " * * *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << " * * *" << "\n";
            break;
        case 9:
            cout << " * * *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << "*     *" << "\n";
            cout << " * * *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << "      *" << "\n";
            cout << " * * *" << "\n";
            break;
    }

    return 0;
}
