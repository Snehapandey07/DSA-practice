/* Date : 24.03.26 */
/* Implementation of queue using stack */
#include <bits/stdc++.h>
using namespace std;

class Q {
public:
    stack<int> s1, s2;

    void push(int x) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }

    int front() {
        return s1.top();
    }

    int size() {
        return s1.size();
    }
};

int main() {
    Q q;
    q.push(10);
    q.push(3);
    q.push(80);
    q.push(95);

    cout << "Popped element: " << q.pop() << endl;
    cout << "Front element: " << q.front() << endl;
    cout << "Size of Queue: " << q.size() << endl;
}