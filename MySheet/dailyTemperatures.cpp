/*Date : 22.09.2026*/
/* using monotonic decresing stack approach , tc - O(n) */

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailytemps(vector<int> temps) {
        int n = temps.size();
        vector<int> ans(n, 0);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && temps[st.top()] <= temps[i]) {
                st.pop();
/*remove temps that are smaller or equal to current temp*/
            }
            if (!st.empty()) {
                ans[i] = st.top() - i;  
/*warmer day idx - cuur_day idx = no. of days to wait*/
            }
            st.push(i);
        }
        return ans;
    }
};
int main() {
    vector<int> temps = {30, 60, 90};
    Solution s;
    vector<int> ans = s.dailytemps(temps);
    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}