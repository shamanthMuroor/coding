#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(23);
    cout << s.top() << endl;
    s.pop();
    cout << s.size() << endl << endl;

    queue<int> q;
    q.push(1);
    q.push(34);
    q.push(2);
    q.pop();
    cout << q.front() << endl << endl;

    deque<int> d;
    d.push_front(2);
    d.push_back(4);
    d.pop_back();
    cout << d.front() << endl << endl;

    priority_queue<int> pq;
    pq.push(7);
    pq.push(30);
    pq.push(2);
    cout << pq.top() << endl;
    return 0;
}