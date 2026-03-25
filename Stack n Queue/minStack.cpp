#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
    stack<int> s;
    int mn;

    void push(int x) {
        if (s.empty()) {
            s.push(x);
            mn = x;
        } 
        //this was for push normally when new first ele comes
        //that itself is the min element
        else {
            if (x >= mn) {
                s.push(x);
            } // if new ele is not smaller than min push normally
            else {
                s.push(2 * x - mn);  // encoded value
                mn = x;
            }//if new smaller than min push new and info about prev min (encoded val)
            //push(3) : 2*3-5 = 1 , so 3 goes to minstack and push 1 encoded to stack = (top<min)
        }
    }

    void pop() {
        if (s.empty()) return; //do nothing

        int top = s.top();
        s.pop();

        if (top < mn) { //encoded val
            mn = 2 * mn - top;  // restore previous min
        }
    }

    int top() {
        if (s.empty()) return -1; 

        int top = s.top();

        if (top >= mn) return top;
        else return mn;
    }

    int getMin() {
        if (s.empty()) return -1;
        return mn;
    }
};

int main() {
    MinStack s;

    s.push(5);
    s.push(3);
    s.push(7);
    s.push(2);

    cout << "Min: " << s.getMin() << endl; 
    cout << "Popped element: " << s.top() << endl;
s.pop();
    cout << "Top: " << s.top() << endl;   
    cout << "Min: " << s.getMin() << endl; 

    return 0;
}