#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> mp;
    mp[0] = 1;
    int prefixSum = 0;
    int count = 0;
    for (int x : nums) {
        prefixSum += x;
        if (mp.find(prefixSum - k) != mp.end()) {
            count += mp[prefixSum - k];
        }
        mp[prefixSum]++;
    }

    return count;
}
};

int main (){
    vector <int> nums = {877,6546,5874,84,52,8,32,8,533,983,8,93,9,84,6};
    int k = 93;
    Solution s;
    cout << "output: "<<s.subarraySum(nums, k);
    return 0;
}