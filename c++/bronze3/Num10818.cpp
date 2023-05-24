#include <iostream>

int main() {
    int N;
    std::cin >> N;
    int num[N];
    int min = 0, max = 0;
    for (int i = 0; i < N; i++)
    {
        std::cin >> num[i];
        
        if(i == 0) {
            max = num[i];
            min = num[i];
        } else {
            if (max < num[i])
            max = num[i];

            if(min > num[i])
                min = num[i];
        }
    }

    std::cout << min << " " << max << std::endl;
}