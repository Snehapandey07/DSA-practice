#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int i = 0; i < nums.size(); i++) {
            if (st.find(nums[i]) != st.end()) {
                return true;
            }

            st.insert(nums[i]);
        }

        return false;
    }
};

int main() {
    vector<int> nums = {7, 5, 64, 98, 3, 2, 7};

    Solution s;

    cout << boolalpha << s.containsDuplicate(nums);

    return 0;
}