/* Date : 25.03.26 */
/* Conversion of postfix to infix expression */

#include <bits/stdc++.h>
using namespace std;

bool isOperand(char c) {
    return isalnum(c);
}

string postToInfix(string s, int n) {
    stack<string> st;

    for(int i = 0; i < n; i++) {
        char ch = s[i];

        if(isOperand(ch)) {
            st.push(string(1, ch));
        }
        else {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();

            string temp = "(" + t2 + ch + t1 + ")";
            st.push(temp);
        }
    }

    return st.top();
}

int main() {
    string s = "AB-DE+F*/";
    int n = s.size();

    cout << "Infix: " << postToInfix(s, n);
}