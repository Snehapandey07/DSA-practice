#include <bits/stdc++.h>
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