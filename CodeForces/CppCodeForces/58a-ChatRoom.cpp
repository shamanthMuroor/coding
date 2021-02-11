//106998411	Feb/09/2021 21:09UTC+5.5	shamanthmuroor	58A - Chat room	GNU C++17	Accepted	31 ms	0 KB

//Question 58a: Chat Room
// Vasya has recently learned to type and log on to the Internet. 
// He immediately entered a chat room and decided to say hello 
// to everybody. Vasya typed the word s. It is considered that 
// Vasya managed to say hello if several letters can be deleted 
// from the typed word so that it resulted in the word "hello". 
// For example, if Vasya types the word "ahhellllloou", it will 
// be considered that he said hello, and if he types "hlelo", 
// it will be considered that Vasya got misunderstood and he 
// didn't manage to say hello. Determine whether Vasya managed 
// to say hello by the given word s.

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