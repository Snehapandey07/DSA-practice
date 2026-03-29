/* Date : 26.03.26 */
/* optimized approach */

#include <bits/stdc++.h>
using namespace std;

vector<int> findNGE(int arr[], int sz){
    vector<int> nge(sz);
    stack<int> st;

    for(int i = sz - 1; i >= 0; i--){ //backward reversing {mistake : wrong operator} 
        while(!st.empty() && st.top() <= arr[i]){
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
    // int sz = 12;
    // int arr[12] = {4,12,5,3,1,2,5,3,1,2,4,6};
    int sz =4;
    int arr[sz] = {1, 3, 2, 4}; 
    
    vector<int> result = findNGE(arr, sz);

    cout << "NGE's in the array:\n";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}