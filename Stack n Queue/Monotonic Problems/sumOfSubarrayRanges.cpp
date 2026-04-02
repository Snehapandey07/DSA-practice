/* Date: 2.04.26 */
/* Sum of aubarray ranges Problem : Optimixed SOlution  */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSumSubarr(int arr[], int n) {
        int maxSum = INT_MIN;
        for (int start = 0; start < n; start++) {
            int current_sum = 0;
            for (int end = start; end < n; end++) {
                current_sum += arr[end];
                maxSum = max(current_sum, maxSum);
            }
        }
        return maxSum;
    }

    int minSumSubarr(int arr[], int n) {
        int minSum = INT_MAX;
        for (int start = 0; start < n; start++) {
            int current_sum = 0;
            for (int end = start; end < n; end++) {
                current_sum += arr[end];
                minSum = min(current_sum, minSum);
            }
        }
        return minSum;
    }

    int rangeSum(int arr[], int n) {
        return maxSumSubarr(arr, n) - minSumSubarr(arr, n);
    }
};

int main() {
    int n = 4;
    int arr[n] = {1, 4, 3, 2};

    Solution obj;
    cout << obj.rangeSum(arr, n);

    return 0;
}