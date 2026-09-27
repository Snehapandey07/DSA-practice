/*Date : 27.06.2026*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
    int right = nums.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return left;
    }
};
int main (){
   vector <int> nums = {1,2,3,4,5,6,7,9};
   int target = 8;
   Solution s;
   cout<< s.searchInsert(nums, target);
   return 0;
}