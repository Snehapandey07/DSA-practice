#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long sumMax = 0, sumMin = 0;

        stack<int> st;

        // 🔹 Sum of subarray minimums
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.top()] >= nums[i])) {
                int mid = st.top(); st.pop();
                int left = st.empty() ? -1 : st.top();
                int right = i;

                sumMin += (long long)nums[mid] * (mid - left) * (right - mid);
            }
            st.push(i);
        }

        // clear stack
        while (!st.empty()) st.pop();

        // 🔹 Sum of subarray maximums
        for (int i = 0; i <= n; i++) {
            while (!st.empty() && (i == n || nums[st.top()] <= nums[i])) {
                int mid = st.top(); st.pop();
                int left = st.empty() ? -1 : st.top();
                int right = i;

                sumMax += (long long)nums[mid] * (mid - left) * (right - mid);
            }
            st.push(i);
        }

        return sumMax - sumMin;
    }
};