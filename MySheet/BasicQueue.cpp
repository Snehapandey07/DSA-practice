/*21.09.2026*/
#include <bits/stdc++.h>
using namespace std;
class solution {
public:
      void printQueue(queue<int>q){
        while (!q.empty()){
            cout<<q.front()<<endl;;
            q.pop();
        }
      }
    bool searchQueue(queue<int>&q, int target){
        while (!q.empty()){
            if(q.front() == target){
                q.front();
                return true;
            }
            q.pop();
        }
        return false;
    }
    void learnQueue(queue<int>& q) {
        q.push(10);
        q.push(20);
        q.push(30);
        q.push(40);
        q.push(50);
        cout << "Queue: ";
        printQueue(q);

        cout << "Front: "
             << q.front() << endl;

        cout << "Back: "
             << q.back() << endl;

        q.pop();
        cout << "After pop: ";
        printQueue(q);

        cout << "Queue size: "
             << q.size() << endl;
             
        if (q.empty())
            cout << "Queue is empty" << endl;
        else
            cout << "Queue is not empty" << endl;
        // SEARCH
        int target = 30;
        if (searchQueue(q, target))
            cout << target << " found" << endl;
        else
            cout << target << " not found" << endl;
    }
};
int main() {
    queue<int> q;
    solution obj;
    obj.learnQueue(q);
    return 0;
}