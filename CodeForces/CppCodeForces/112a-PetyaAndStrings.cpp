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