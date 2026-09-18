#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int CurrentSum = nums[0];
        for (int i = 1; i <nums.size(); i++){
            CurrentSum = max(nums[i] , CurrentSum + nums[i]);
            maxSum = max (maxSum , CurrentSum);
        }
        return maxSum;
            }
};
int main (){
    vector <int> nums = {7,45,23,9,7,-9,-6};
    Solution s;
    cout<<s.maxSubArray(nums);
    return 0;
}