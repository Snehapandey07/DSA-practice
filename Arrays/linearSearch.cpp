#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++){
            if (nums[i] == target){
                return 1;  // found
            }
        }
        return 0;  
    }
};

int main (){
    Solution s;

    vector<int> nums = {1, 2, 3, 4, 5};
    int target = 3;

    int result = s.linearSearch(nums, target);

    if(result == 1){
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}