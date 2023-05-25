#include <iostream>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B;
    
    std::cin >> A >> B;
    int i = 1, cnt = 0, total = 0;
    while (true) {
        for (int k = 0; k < i; k++) {
            cnt++;
            if (cnt >= A && cnt <= B) {
                total += i;
                if (cnt == B)
                    break;
            }
        }
        if (cnt == B)
            break;
        i++;
    }

    std::cout << total;
    
    return 0;
}