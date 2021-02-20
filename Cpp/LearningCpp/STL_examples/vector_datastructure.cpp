#include <iostream>
#include <vector>

using namespace std;

//Print the vector
void printVector(vector<int> v) {
    for(vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
       cout << *it;
    }
    cout << endl;
}

int main() {
    vector<int> v;

    // Dynamic Array
    for(int i=1; i <=10; i++)
        v.push_back(i);

    printVector(v);

    v.push_back(34);
    v.erase(v.begin()+3);
    printVector(v);

    //Sets element at index
    v[3] = 4;
    //Another way to print
    for(auto element : v) {
        cout << element;
    }
    cout << endl;
    return 0;
}