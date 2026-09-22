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

/*next greate ele 1 where it contains two vectors*/
/*class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mp;
        for (int i = nums2.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }
            if (st.empty())
                mp[nums2[i]] = -1;
            else
                mp[nums2[i]] = st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        for (int x : nums1) {
            ans.push_back(mp[x]);
        }
        return ans;
    }
};*/