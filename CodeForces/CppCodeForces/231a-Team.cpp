//107077021	Feb/10/2021 22:18UTC+5.5	shamanthmuroor	231A - Team	GNU C++17	Accepted	62 ms	0 KB

//Question 231a: Team
// This contest offers n problems to the participants. For each problem 
// we know, which friend is sure about the solution. Help the friends 
// find the number of problems for which they will write a solution.

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