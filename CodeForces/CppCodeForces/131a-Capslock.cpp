// 108047257	Feb/20/2021 22:23UTC+5.5	shamanthmuroor	131A - cAPS lOCK	GNU C++17	Accepted	31 ms	0 KB

// Question 112a: A. cAPS lOCK

#include <iostream>

using namespace std;

void convertToSmall(char str[]) {
    for(int i=1; str[i]!='\0'; i++) {
        if(str[i] >= 65 && str[i] <= 92)
            str[i] = str[i] + 32; 
    }
}

bool checkForSmallCase(char str[]) {
    for(int i=1; str[i]!='\0'; i++) 
        if(str[i] >= 97 && str[i] <= 122)
            return true;
    return false; 
}

int main() {
    char str[100];
    cin >> str;

    if(!checkForSmallCase(str)) {
        if(str[0] >= 97 && str[0] <= 122)
            str[0] = str[0] - 32;
        else
            str[0] = str[0] + 32;
        convertToSmall(str);
    }
    cout << str << endl;
    return 0;
}