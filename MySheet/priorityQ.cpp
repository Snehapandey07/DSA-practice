#include <bits/stdc++.h>
using namespace std;
int main (){
    priority_queue<string> pq;
    pq.push("C");
    pq.push("B");
    pq.push("D");
    pq.push("E");
    pq.push("F");
    pq.push("A");
    pq.push("H");
    pq.push("G");

    while(!pq.empty()){
        cout<< pq.top()<<endl;
        pq.pop();
    }
    return 0;
}