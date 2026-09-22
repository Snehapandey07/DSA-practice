// /* Date : 21.09.2026 */
// #include <bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     void stackOperations(stack<int>& st) {
//         st.push(10);
//         st.push(30);
//         st.push(90);
//         st.push(100);

//         cout << "After pushing elements: ";
//         printStack(st);
//         cout << "Top element: " << st.top() << endl;
//         st.pop();   

//         cout << "After pop: ";
//         printStack(st);
//         st.push(200);
//         cout << "After pushing 99 and 200: ";
//         printStack(st);
//         st.pop();  
//         cout << "After pop: ";
//         printStack(st);
//         cout << "Stack size: " << st.size() << endl;
//         if (st.empty())
//             cout << "Stack is empty" << endl;
//         else
//             cout << "Stack is not empty" << endl;
//         cout << "Stack traversal: ";
//         printStack(st);
//         int target = 30;
//         if (searchStack(st, target))
//             cout << target << " found in stack" << endl;
//         else
//             cout << target << " not found in stack" << endl;
//         while (!st.empty()) {
//             cout << "Removing: " << st.top() << endl;
//             st.pop();
//         }
//         cout << "Stack is now empty." << endl;
//     }
//     void printStack(stack<int> st) {
//         while (!st.empty()) {
//             cout << st.top() << " ";
//             st.pop();
//         }
//         cout << endl;
//     }
//     bool searchStack(stack<int> st, int target) {
//         while (!st.empty()) {
//             if (st.top() == target)
//                 return true;
//             st.pop();
//         }
//         return false;
//     }
// };
// int main() {
//     stack<int> st;
//     Solution obj;
//     obj.stackOperations(st);
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
class solution {
public:
    void printStack(stack <int> st){
        while (!st.empty()){
            cout<< st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    }
    bool searchStack (stack <int>& st, int target){
        while (!st.empty()){
            if (st.top() == target){
                st.top();
            }
            st.pop();
        }
        cout<<endl;
    }
    void learnStack(stack<int>& st) {
        st.push(10);
        st.push(710);
        st.push(710);
        st.push(50);
        st.push(20);
        cout << "Stack: ";
        printStack(st);   
        st.pop();
        cout << "After pop, top: "
             << st.top() << endl;
        cout << "Stack size: "
             << st.size() << endl;
        // SEARCH
        int target = 710;
        if (searchStack(st, target))
            cout << target << " found" << endl;
        else
            cout << target << " not found" << endl;
    }
};
int main() {
    stack<int> st;
    solution obj;
    obj.learnStack(st);
    return 0;
}