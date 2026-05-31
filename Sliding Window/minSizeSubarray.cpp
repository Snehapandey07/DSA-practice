#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int minSubArrayLen(int target, vector<int>& nums) {
int left = 0;
int sum = 0;
int minlen = INT_MAX;
for (int right = 0 ; right < nums.size(); right++){
    sum += nums[right];
    while(sum >= target){
        minlen = min(minlen, right-left +1);
        sum -= nums[left];
    }

} 
return (minlen == INT_MAX) ? 0 : minlen;
}
};

int main() {

    vector<int> nums = {2,3,1,2,4,3};
    int target = 7;

    Solution s;

    cout << s.minSubArrayLen(target, nums);

    return 0;
}
