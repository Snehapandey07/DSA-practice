/*22.09.2026*/
#include<bits/stdc++.h>
using namespace std;
class patterns {
public:
void stacks (stack <int> st){
//Basic stack template
int x;
st.push(x);       
st.pop();         
st.top();         
st.empty();       
st.size();        


//read,rempve ele from stack process everything
while (!st.empty()) {
    int x = st.top();
    st.pop();
// process x
}
//example sum of stack : Time: O(n) Space: O(1)
int sum = 0;
while (!st.empty()) {
    sum += st.top();
    st.pop();
}
cout << sum;

//Search in stack -Time: O(n)
int target;
bool found = false;
while (!st.empty()) {
    if (st.top() == target) {
        found = true;
        break;
    }
    st.pop();
}
}
//reverse a string
string reverseString(string s){
    stack<char> st1;
    for (char c : s)
        st1.push(c);
    string ans = "";
    while (!st1.empty()) {
        ans += st1.top();
        st1.pop();
    }
    return ans;
}

//Balanced Parantheses - time : O(n), Space: O(n)
bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }
        else {
            if (st.empty())
                return false;
            char top = st.top();
            st.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;
        }
    }
    return st.empty();
}

//Remove adjacent duplicates - time : O(n), Space: O(n)
string removeDuplicates(string s) {
    stack<char> st;
    for (char c : s) {
        if (!st.empty() && st.top() == c)
            st.pop();
        else
            st.push(c);
    }
    string ans = "";
    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

//Next greater element - monotonic stack , time/space: O(n)
vector<int> nextGreater(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();
        if (!st.empty())
            ans[i] = st.top();
        st.push(arr[i]);
    }
    //Next smaller element same idea only chages - O(n)
    // while (!st.empty() && st.top() >= arr[i])
    // st.pop();

     return ans;
}

//Previous greater element 
vector<int> previousGreater(vector<int>& arr) {
    int n = arr.size();
    vector<int> ans(n, -1);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() <= arr[i])
            st.pop();
        if (!st.empty())
            ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}
};