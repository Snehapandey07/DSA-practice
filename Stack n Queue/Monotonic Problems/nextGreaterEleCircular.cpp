/* Date : 26.03.26 */
/* optimized approach */

#include <bits/stdc++.h>
using namespace std;

vector<int> findNGE(int arr[], int sz){
    vector<int> nge(sz);
    stack<int> st;

    for(int i = 2*sz - 1; i >= 0; i--){ //backward reversing {mistake : wrong operator} 
        // cout<<arr[i%n]<<" "
        while(!st.empty() && st.top() <= arr[i%sz]){
            st.pop();// if stack is empty and there are smaller ele in it just pop it man they are not contributing towards the solution
        }

        if(st.empty()){
            nge[i%sz] = -1;
        } else {
            nge[i%sz] = st.top();
        }

        st.push(arr[i%sz]);
    }

    return nge;
}

int main(){
    int sz = 11;
    int arr[sz] = {3,10,4,2,1,2,6,1,7,2,9};

    vector<int> result = findNGE(arr, sz);

    cout << "NGE's in the array:\n";
    for(int x : result){
        cout << x << " ";
    }

    return 0;
}