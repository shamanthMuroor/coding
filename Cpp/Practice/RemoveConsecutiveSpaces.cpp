#include <iostream>
// #include <string>

using namespace std;

int main() {
    string s, new_s;
    getline(cin, s);
    string prev = "";
    // char pre = '\0';
    for(int i=0; i<s.length(); i++) {
        // if(s[i] == ' ' && prev == ' ') {
        if(s[i] == ' ' && prev == " ") {
            continue;
        }
        // else if(s[i] != ' ')
        else if(s[i] != ' ') {
            new_s += s[i];
            prev = "";
            // prev = '\0';
        }
        else {
            prev = " ";
            // prev = ' ';
            new_s += s[i];
        }
    }
    cout << new_s << endl;
    return 0;
}