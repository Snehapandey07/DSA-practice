// // Date : 15.04.26
// // 3 SUM 

// #include <bits/stdc++.h>
// using namespace std;
// using namespace std;
// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> result;
//         sort(nums.begin(), nums.end());

//         for (int i = 0; i < nums.size(); i++) {
//             if (i > 0 && nums[i] == nums[i - 1]) continue;

//             int left = i + 1;
//             int right = nums.size() - 1;

//             while (left < right) {
//                 int sum = nums[i] + nums[left] + nums[right];

//                 if (sum == 0) {
//                     result.push_back({nums[i], nums[left], nums[right]});

//                     while (left < right && nums[left] == nums[left + 1]) left++;
//                     while (left < right && nums[right] == nums[right - 1]) right--;

//                     left++;
//                     right--;
//                 }
//                 else if (sum < 0) {
//                     left++;
//                 }
//                 else {
//                     right--;
//                 }
//             }
//         }

//         return result;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

    vector<vector<int>> threeSum(vector<int>& nums, int target) {

        vector<vector<int>> ans;

        sort(nums.begin(), nums.end());

        int n = nums.size();

        // Fix one element
        for (int i = 0; i < n - 2; i++) {

            int left = i + 1;
            int right = n - 1;

            // Two pointer search
            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum == target) {

                    // Store triplet
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