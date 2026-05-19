/*Date : 19 May 2026*/
/*Pattern: Merge Sorted Arrays (Two Pointers)

Key Idea:
Fill nums1 from the BACK to avoid overwriting. TC: O(m+n), SC : O(1) */
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void merge(vector<int>& nums1, int m,
               vector<int>& nums2, int n) {

        int ptr1 = m - 1;
        int ptr2 = n - 1;
        int ptr3 = m + n - 1;

        while (ptr1 >= 0 && ptr2 >= 0) {

            if (nums1[ptr1] > nums2[ptr2]) {
                nums1[ptr3] = nums1[ptr1];
                ptr1--;
            }
            else {
                nums1[ptr3] = nums2[ptr2];
                ptr2--;
            }

            ptr3--;
        }

        while (ptr2 >= 0) {
            nums1[ptr3] = nums2[ptr2];
            ptr2--;
            ptr3--;
        }
    }
};

int main() {

    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;

    vector<int> nums2 = {2,5,6};
    int n = 3;

    Solution s;

    s.merge(nums1, m, nums2, n);

    cout << "Merged array: ";

    for (int x : nums1) {
        cout << x << " ";
    }

    return 0;
}