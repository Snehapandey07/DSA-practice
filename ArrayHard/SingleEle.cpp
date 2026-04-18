//18.04.26
//Find a single element that is not repeated in the array and return it 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n = nums.size();
        
        if (n == 1) return nums[0];

        for (int i = 0; i < n; i++) {
            bool leftSame = (i > 0 && nums[i] == nums[i - 1]);
            bool rightSame = (i < n - 1 && nums[i] == nums[i + 1]);

            if (!leftSame && !rightSame) {
                return nums[i];
            }
        }

        return -1; // should not happen
    }
};
int main(){
    return 0;
}