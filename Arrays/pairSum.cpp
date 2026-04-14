/*Date : 25.01.26*/
/* Pair sUm problem Program */
/* Pair sum is the problem that works on sorted array to find the sum by adding mumbers in pairs is equal to target value */

// #include <iostream>
// using namespace std;

// int main(){
//     int size = 10;
//     int arr[10] = {7,5,8,2,9,3,4,5,1,6};
//     int target = 7;
//     for (int i = 0; i < size ; i ++){
//         for (int j = i+1 ; j < size ; j++){
//             if (arr[i] + arr[j] == target){
//                   cout << arr[i] << " + " << arr[j] << " = " << target << endl;
//             }
//         }
//     }
// }

// Optimized 
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int need = target - nums[i];

            if (mp.find(need) != mp.end()) {
                return {mp[need], i}; // previous index, current index
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};
int main(){
    Solution obj;

    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

}