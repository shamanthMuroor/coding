#include <iostream>

using namespace std;

int main() {
    string s, hello="hello";
    cin >> s;
    int j=0, pas=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == hello[j]) {
            j++;
            pas++;
        }
    }
    if(pas == 5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}