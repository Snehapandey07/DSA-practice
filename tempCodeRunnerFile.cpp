#include<bits/stdc++.h>
using namespace std;

vector <int> findNGE(int ans[], int sz){
    vector<int> nge(sz);
    stack<int>st;
    for(int i = sz-1; i>=0; i--){
        while(!st.empty() && st.top()<=ans[i]){
            st.pop();
        }
        if(st.empty()){
        nge[i] = -1;
        }else{
            nge[i] = st.top();
        }st.push(ans[i]); 
    }
    return nge;
} 
int main(){
    int sz = 12;
    int arr[12] = {4,12,5,3,1,2,5,3,1,2,4,6};

    vector<int> result = findNGE(arr, sz);

    cout << "NGE's in the array:\n";
    for(int x : result){
        cout << x << " ";
    }
    return 0;
}