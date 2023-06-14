#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long N, M;
    std::cin >> N >> M;
    
    std::cout << abs(M - N);
    
    return 0;
}