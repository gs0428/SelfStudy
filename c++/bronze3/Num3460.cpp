#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    std::cin >> T;
    for(int i = 0;i<T;i++) {
        int n;
        std::cin >> n;
        string ans = "";
        while(n != 0) {
            if(n%2 == 0)
                ans.append("0");
            else
                ans.append("1");
            n/=2;
        }
        for(int k = 0;k<(int)ans.length();k++) {
            if(ans[k] == '1')
                std::cout << k << " ";
        } 
        
        std::cout << std::endl;
    }
    
    return 0;
}