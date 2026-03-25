#include <bits/stdc++.h>
using namespace std;

bool isOperand(char c) {
    return isalnum(c);
}

string postToPrefix(string s, int n) {
    stack<string> st;

    for(int i = 0; i < n; i++) {
        char ch = s[i];

        if(isOperand(ch)) {
            st.push(string(1, ch));
        }
        else {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();

            // string conv = "(" + t1 + ch + t2 + ")";
            st.push(s[i]+t2+t1);
        }
    }

    return st.top();
}

int main() {
  string s = "AB-DE+F*/";
    int n = s.size();

    cout << "Prefix: " << postToPrefix(s, n);
}