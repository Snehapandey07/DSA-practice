/* Date : 27.01.16*/
/* Optimized verdion of pairSum problem */

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int size = 10;
    int arr[10] = {7,5,8,2,9,3,4,5,1,6};
    int target = 7;
    
    sort(arr, arr + size);

    // Step 2: Two pointers
    int left = 0;
    int right = size - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (sum == target) {
            cout << arr[left] << " + " << arr[right] << " = " << target << endl;
            left++;
            right--;
        }
        else if (sum < target) {
            left++;
        }
        else {
            right--;
        }
    }

    return 0;
}
