/* Date: 24.03.26 */
/* Balanced Paranthases concept that is very important */

#include <bits/stdc++.h>
using namespace std;

bool func(string s, int n) {
    stack<char> st;

    for(int i = 0; i < n; i++) {
        char ch = s[i];

        if(ch == '(' || ch == '[' || ch == '{') {
            st.push(ch);
        } else {
            if(st.empty()) return false;

            char top = st.top();
            st.pop();

            if((ch == ')' && top != '(') ||
               (ch == ']' && top != '[') ||
               (ch == '}' && top != '{')) {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s = "()[({}()]";
    int n = s.length();

    if(func(s, n)) cout << "Balanced";
    else cout << "Not Balanced";
}