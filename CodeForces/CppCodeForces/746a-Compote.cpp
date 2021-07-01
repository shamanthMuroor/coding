#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cin >> a >> b >> c;
    int x = min(a, min(b/2, c/4));
    cout << x*7;
    return 0;
}



// #include <iostream>

// using namespace std;

// int main() {
//     int a,b,c, total=0;
//     cin >> a >> b >> c;
//     while(a != 0) {
//         int req_apples, req_pears;
//         req_apples = a*2;
//         if(b >= req_apples) {
//             req_pears = req_apples*2;
//             if(c >= req_pears) {
//                 total = a + req_apples + req_pears;
//                 break;
//             }
//         }
//         a--;
//     }
//     cout << total << endl;
//     return 0;
// }