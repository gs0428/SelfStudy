#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int out, in;
    int max = 0, total = 0;

    for (int i = 0; i < 10;i++) {
        std::cin >> out >> in;
        total += in - out;
        if(total > max) 
            max = total;
    }

    std::cout << max;
}