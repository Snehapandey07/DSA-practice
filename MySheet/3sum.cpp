#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == target) {
                    ans.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};

int main() {

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int target = 12;
    Solution s;
    vector<vector<int>> ans = s.threeSum(nums, target);
    cout << "Triplets are:\n";
    for (auto triplet : ans) {
        for (auto x : triplet) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}