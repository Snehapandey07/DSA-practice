/* Date : 25.03.26 */
/* Conversion of infix to Prefix expression */
/* 1. Reverse infix 
   2. Infix to Postfix conversion
   3. Reverse that answer
*/
#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}

bool isOperand(char c) {
    return isalnum(c);
}

string infixToPrefix(string s) {
    reverse(s.begin(), s.end());

    // swap brackets
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == '(') s[i] = ')';
        else if(s[i] == ')') s[i] = '(';
    }

    stack<char> st;
    string ans = "";

    for(int i = 0; i < s.length(); i++) {
        char ch = s[i];

        if(isOperand(ch)) {
            ans += ch;
        }
        else if(ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && priority(st.top()) > priority(ch)) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    string s = "(A+B)*C-D+F";
    cout << infixToPrefix(s);
}