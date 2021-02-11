//106993934	Feb/09/2021 20:18UTC+5.5	shamanthmuroor	69A - Young Physicist	GNU C++17	Accepted	62 ms	0 KB

//Question 69a: Young Physicist

#include <iostream>

using namespace std;

int main() {
    int n, x, y, z;
    int xv=0, yv=0, zv=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x >> y >> z;
        xv += x;
        yv += y;
        zv += z;
    }
    if(xv == 0 && yv == 0 && zv==0) {
        cout << "YES";
    } 
    else 
        cout << "NO";
    return 0;
}

