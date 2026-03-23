/* Date : 23.03.26 */
/* Implementation of stack using vector : last in first out*/

#include <bits/stdc++.h>
using namespace std;

class Stack {
    vector<int> v;

public:
    // PUSH
    void push(int x) {
        v.push_back(x);
    }

    // POP
    void pop() {
        if (v.empty()) {
            cout << "Stack is empty\n";
        } else {
            v.pop_back();
        }
    }

    // PEEK / TOP
    int peek() {
        if (v.empty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return v.back();
    }

    // isEmpty
    bool is_empty() {
        return v.empty();
    }

    // SIZE
    int size() {
        return v.size();
    }
};

int main() {
    Stack s;

    s.push(5);
    s.push(7);
    s.push(10);
    s.push(6);

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    cout << "Top after pop: " << s.peek() << endl;

    cout << "Stack is empty: " << s.is_empty() << endl;

    cout << "Stack size: " << s.size() << endl;

    return 0;
}