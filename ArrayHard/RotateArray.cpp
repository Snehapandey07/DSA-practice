/* Date : 19 May 2026 */

/* Pattern: Rotate Array
Right rotation by k:

1. Reverse whole array
2. Reverse first k elements
3. Reverse remaining elements

Why: Moves last k elements to front while restoring order.
TC: O(n)
SC: O(1)
 */

#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

    void reverseArray(vector<int>& nums, int left, int right) {

        while (left < right) {

            swap(nums[left], nums[right]);

            left++;
            right--;
        }
    }

    void rotate(vector<int>& nums, int k) {

        int n = nums.size();

        k = k % n;

        reverseArray(nums, 0, n - 1);
        reverseArray(nums, 0, k - 1);
        reverseArray(nums, k, n - 1);
    }
};

int main() {

    vector<int> nums = {1,2,3,4,5,6,7};

    int k = 3;

    Solution s;

    s.rotate(nums, k);

    cout << "Rotated array: ";

    for (int x : nums) {
        cout << x << " ";
    }
    return 0;
}