/*#include <bits/stdc++.h>
using namespace std;
int Bs(vector<int> &arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    int target = 8;
    cout << Bs(arr, target);
} 
*/
/* Recursive Binary Search */
#include <bits/stdc++.h>
using namespace std;
int bs(vector<int>& nums, int left, int right, int target) {
    if (left > right) {
        return -1;
    }
    int mid = left + (right - left) / 2;
    if (nums[mid] == target) {
        return mid;
    }
    else if (nums[mid] < target) {
        return bs(nums, mid + 1, right, target);
    }
    else {
        return bs(nums, left, mid - 1, target);
    }
}
int main() {
    vector<int> nums = {1,2,3,4,5,6,7,8,9};
    int target = 8;
    cout << bs(nums, 0, nums.size() - 1, target);
    return 0;
}