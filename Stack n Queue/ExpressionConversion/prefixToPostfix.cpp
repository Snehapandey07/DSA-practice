#include <bits/stdc++.h>
using namespace std;

bool isOperand(char c) {
    return isalnum(c);
}

string PrefixTopost(string s, int n) {
    stack<string> st;

    for(int i = n-1; i >= 0; i--) {
        char ch = s[i];

        if(isOperand(ch)) {
            st.push(string(1, ch));
        }
        else {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();

            // string conv = "(" + t1 + ch + t2 + ")";
            st.push(t1+t2+s[i]);
        }
    }

    return st.top();
}

int main() {
  string s = "/-AB*+DEF";
    int n = s.size();

    cout << "Postfix: " << PrefixTopost(s, n);
}