#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, -1);
        stack<int> st;
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums[i]) {
                st.pop();
            }
            if (!st.empty()) {
                ans[i] = st.top();
            }
            st.push(nums[i]);
        }
        return ans;
    }
};
int main() {
    vector<int> nums = {4, 1, 2};
    Solution sol;
    vector<int> ans = sol.nextGreaterElement(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}