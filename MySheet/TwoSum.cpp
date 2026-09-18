// /* Date : 18/09.2026 */
// #include<bits/stdc++.h>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
        
//         unordered_map<int, int> mp;
        
//         for (int i = 0; i < nums.size(); i++) {
            
//             int complement = target - nums[i];
            
//             if (mp.find(complement) != mp.end()) {
//                 return {mp[complement], i};
//             }
            
//             mp[nums[i]] = i;
//         }
        
//         return {};
//     }
// };

// int main() {

//     vector<int> nums = {876, 868, 34, 5, 765, 7};
//     int target = 39;

//     Solution s;

//     vector<int> result = s.twoSum(nums, target);

//     cout << "Indices: ";
//     for (int index : result) {
//         cout << index << " ";
//     }

//     return 0;
// }


/*18.07.2026*/
/*Using two pointers approach*/
/*but the prerequisite is that array should be sorted while 
in hashmap this isn't required*/

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            return {arr[left], arr[right]};
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }
    return {};
}

int main() {
    vector<int> arr = {6, 3, 2, 5, 7, 8, 3};
    int target = 12;
    vector<int> result = twoSum(arr, target);
    cout << "Output: ";
    for (int x : result) {
        cout << x << " ";
    }
    return 0;
}