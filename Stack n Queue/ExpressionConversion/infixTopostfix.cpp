#include <bits/stdc++.h>
using namespace std;

bool isOperand(char c) {
    return isalnum(c);
}

int priority(char c) {
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return -1;
}

string infixToPostfix(string s, int n) {
    stack<char> st;
    string ans = "";

    for(int i = 0; i < n; i++) {
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
            while(!st.empty() && priority(st.top()) >= priority(ch)) {
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

    return ans;
}

int main() {
    string s = "a+b*(c^d-e)";
    int n = s.size();

    cout << "Postfix expression: " << infixToPostfix(s, n);
}