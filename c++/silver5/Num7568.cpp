#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> kg;
vector<int> cm;
int N, temp, temp1;

int compare(int i) {
    int cnt = 0;
    int k = i+1;
    int num = 1;
    while (true)
    {
        if(k==N) {
            k = 0;
            continue;
        }
        if(kg[i] < kg[k] && cm[i] < cm[k]){
            num++;
        }
        cnt++;
        if(cnt == N-1)
            break;
        k++;
    }
    
    return num;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    std::cin >> N;
    for (int i = 0; i < N; i++)
    {
        std::cin >> temp >> temp1;
        kg.push_back(temp);
        cm.push_back(temp1);
    }

    for (int i = 0; i < N;i++) {
        std::cout << compare(i) << " ";
    }

        return 0;
}