#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {

            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1};
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
        }

        return {};
    }
};

int main() {

    vector<int> numbers = {2,7,11,15};
    int target = 9;

    Solution s;

    vector<int> ans = s.twoSum(numbers, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}



/* Similar problem : two sum pointer  */
/* . Max Number of K-Sum Pairs  */
/*
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size() - 1;
        int count = 0;

        while (l < r) {

            int sum = nums[l] + nums[r];

            if (sum == k) {
                count++;
                l++;
                r--;
            }
            else if (sum < k) {
                l++;
            }
            else {
                r--;
            }
        }

        return count;
    }
};
*/

