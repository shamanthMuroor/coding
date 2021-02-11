//106927325	Feb/08/2021 22:27UTC+5.5	shamanthmuroor	112A - Petya and Strings	GNU C++17	Accepted	62 ms	0 KB

// Question 112a: Petya and Strings
// Little Petya loves presents. His mum bought him two 
// strings of the same size for his birthday. The strings 
// consist of uppercase and lowercase Latin letters. Now Petya 
// wants to compare those two strings lexicographically. 
// The letters' case does not matter, that is an uppercase 
// letter is considered equivalent to the corresponding 
// lowercase letter. Help Petya perform the comparison.

#include <iostream>
#include <string>

using namespace std;

int main() {
   string a, b;
   cin >> a >> b;
   for (int i=0; i<a.size(); i++) {
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }
   
    cout << ((a<=b) ? ((a==b) ? 0 : -1 ) : 1 );
}