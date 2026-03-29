#include <bits/stdc++.h>
using namespace std;

vector<int> findNSE(int arr[], int sz){
    vector<int> nge(sz);
    stack<int> st;

    for(int i = sz - 1; i >= 0; i--){ //backward reversing {mistake : wrong operator} 
        while(!st.empty() && st.top() >= arr[i]){
            st.pop();// if stack is empty and there are smaller ele in it just pop it man they are not contributing towards the solution
        }

        if(st.empty()){
            nge[i] = -1;
        } else {
            nge[i] = st.top();
        }

        st.push(arr[i]);
    }

    return nge;
}

int main(){
    int sz = 5;
   int arr[sz] = {4, 8, 5, 2, 25};

    vector<int> result = findNSE(arr, sz);

    cout << "NGE's in the array:\n";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}