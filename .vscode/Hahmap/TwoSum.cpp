#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {

                return {mp[complement], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};

int main() {

    vector<int> nums = {12, 6, 12, 43, 54, 65, 76};
    int target = 24;

    Solution s;

    vector<int> ans = s.twoSum(nums, target);

    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    }
    else {
        cout << "No pair found" << endl;
    }

    return 0;
}