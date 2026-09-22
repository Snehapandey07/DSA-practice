#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool valid(string s) {
        stack<char> st;

        for (char c : s) {

            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            }
            else {
                if (st.empty()) {
                    return false;
                }

                if ((c == ')' && st.top() == '(') ||
                    (c == ']' && st.top() == '[') ||
                    (c == '}' && st.top() == '{')) {
                    st.pop();
                }
                else {
                    return false;
                }
            }
        }
       return st.empty();
    }
};

int main() {
    string str = "{[()]}";
    Solution sol;
    cout << sol.valid(str) << endl;
    return 0;
}