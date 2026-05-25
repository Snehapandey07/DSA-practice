#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int insertPos = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] != 0) {
                nums[insertPos] = nums[i];
                insertPos++;
            }
        }
        //filling remain' pos w 0
        while (insertPos < nums.size()) {
            nums[insertPos] = 0;
            insertPos++;
        }
    }
};                                                                           
int main() {

    vector<int> nums = {0, 1, 0, 3, 12};

    Solution obj;

    obj.moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}                                                                          