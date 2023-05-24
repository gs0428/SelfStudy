#include <iostream>

int main() {
    int N, K;
    std::cin >> N >> K;
    int num[100];
    int n = 0;
    int count = 0;

    for (int i = 1; i <= N; i++)
    {
        if(N%i == 0) {
            num[n] = i;
            n++;
            count++;
        }
    }

    if (K > count)
    {
        std::cout << 0 << std::endl;
    }
    else
    {
        std::cout << num[K-1] << std::endl;
    }

    return 0;
}