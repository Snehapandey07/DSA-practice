/* Date : 29.01.26 */
/* Binary Search Program */

#include <iostream>
using namespace std; 

int binarySearch(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (target > arr[mid]) {
            start = mid + 1;
        }
        else if (target < arr[mid]) {
            end = mid - 1;
        }
        else {
            return mid;
        }
    }
    return -1; 
}

int main() {
    int size = 6;
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int target = 5;
    int result = binarySearch(arr, size, target);
   if (result != -1) {
        cout << "Element " << target << " found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}
