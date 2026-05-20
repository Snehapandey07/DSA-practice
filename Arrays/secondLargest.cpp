#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int secondLargestElement(vector<int>& nums) {

        int l = INT_MIN; // both starting from -infinity
        int sl = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {

          if (nums[i] > l) {
                sl = l;
                l = nums[i];
            }
            else if (nums[i] > sl && nums[i] != l) {
                sl = nums[i];
            }
        }

        if (sl == INT_MIN)
            return -1;

        return sl;
    }
};

int main(){
    vector<int> nums  = {4,7,2,72,89};
    Solution s;
    int ans = s.secondLargestElement(nums);
    cout << "Second largest element "<<ans <<endl;
    return 0 ;
}