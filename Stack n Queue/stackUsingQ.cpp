/* Date : 24.03.26 */
/* implementatation of Stack [LIFO]  using Queue [FIFO] */

#include <bits/stdc++.h>
using namespace std;

class Stack{
    public:
    queue <int> q;
    void push(int x){
        int sz = q.size();
        q.push(x);
        for(int i = 0; i<sz; i++){
            q.push(q.front());
            q.pop();
        }
    } 
    int pop(){
    int val = q.front();
    q.pop(); 
    return val;
}
    int top(){
        return q.front();
    }
    int size(){
        return q.size();
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(12);
    s.push(1);

    cout<<"Popped element: " <<s.pop()<<endl;
    cout<<"Top elemnt : "<<s.top()<<endl;
    cout<<"Size of stack implemented using queue: "<< s.size()<< endl;
    return 0;
}
