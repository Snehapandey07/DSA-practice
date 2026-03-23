/* Date: 23.03.2 */
/* Queue implementation using array */

#include <bits/stdc++.h>
using namespace std;

class Q{
    int size = 10, q[10], end = -1, start = -1, currentSz = 0;

    public: 

    void push(int x){
     if (currentSz == size) return;
     if (currentSz == 0){
        start = 0; end = 0;
     }else{
        end = (end + 1) % size;
     }
     q[end] = x;
     currentSz += 1;
    }

    int pop(){
        if (currentSz == 0){
    return -1; 
}
        int ele = q[start];
        if(currentSz == 1){
            start = end = -1;
        }else {
            start = (start + 1) % size;
        }
    
   currentSz -= 1;
   return ele;
    }

    int top (){
        if (currentSz == 0){
            return false ;
        }else{
            return q[start];
        }
    }

    int sizeOfQ(){
        return currentSz;
    }
};

int main(){
    Q q;
    q.push(5);
    q.push(10);
    q.push(6);
    q.push(30);

    cout<<"Top element: "<<q.top()<<endl;
    cout<<"Popped element: "<<q.pop()<<endl;
    cout<<"Size of the stack: "<<q.sizeOfQ()<<endl;
    return 0;

}