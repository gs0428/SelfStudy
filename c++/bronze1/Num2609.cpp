#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    vector<int> ndiv;
    vector<int> mdiv;
    int cdiv;
    std::cin >> n >> m;
    for (int i = 1; i <= n;i++) {
        if(n%i == 0)
            ndiv.push_back(i);
    }
    for (int i = 1; i <= m;i++) {
        if(m%i == 0)
            mdiv.push_back(i);
    }
    for (int i = 0; i < ndiv.size();i++){
        for (int k = 0; k < mdiv.size();k++){
            if(ndiv[i] == mdiv[k])
                cdiv = ndiv[i];
        }
    }
    int cmul = (n / cdiv) * (m / cdiv);
    int num = 1;
    while (true)
    {
        if((cmul*num) % n == 0 & (cmul*num) % m == 0){
            cmul *= num;
            break;
        }
        num++;
    }
    std::cout << cdiv << "\n" << cmul;

    return 0;
}