#include <iostream>

int main() {
    int n, a, b, c, sum;
    std::cin >> n;
    int count = 0;
    for(int i=0; i<n; i++) {
        std::cin >> a >> b >> c;
        sum = a+b+c; 
        if(sum >= 2) {
             count++;
        }
    }
    std::cout << count;
}