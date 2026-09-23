/* 23.09.2026 */
/* 1. Remove expired index from FRONT
   2. Remove smaller values from BACK
   3. Add current index to BACK
   4. FRONT = maximum */

 #include <bits/stdc++.h>
 using namespace std;
 class Solution{
    public:
    vector <int> maxSw (vector<int>&nums, int k){
        deque<int>dq;
        vector <int> ans;
        for (int i = 0; i< nums.size(); i++){
            while (!dq.empty() && dq.front() <= i-k){
                dq.pop_front();
            }
            while (!dq.empty() && nums[dq.back()] <= nums[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            if (i >= k-1){
                ans.push_back(nums[dq.front()]);
            }
        }
        return ans;
    }
 };

 int main (){
    vector <int> nums = {1,-1,2,5,7,3,9,6};
    int k = 3;
    Solution s;
    vector<int>ans;
    ans = s.maxSw(nums, k);
    for (int i : ans){
    cout<<i<<" ";
    }
    return 0 ;
 }