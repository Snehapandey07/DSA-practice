/* Date : 30 January 2026 */
/* Binary Search : Recursive */

#include <iostream>
using namespace std;

int RecBinarySearch(int arr[], int start, int end, int target) {
   if (start <= end) {
    int mid = start + (end - start)/2;

    if (target < arr[mid] ) {
        RecBinarySearch(arr, mid+1, end, target );
    }
    else if (target > arr[mid]){
        RecBinarySearch(arr, start, mid -1 , target );
    }
    else {
        return mid;
    }
}
}

int main() {
    int size = 6;

    int arr[6] = {3, 7, 9, 9, 43, 56};

    int target = 9;
    int start = 0;
    int end = size - 1;

    int result = RecBinarySearch(arr, start, end, target);

    if (result != -1)
        cout << "Element " << target << " found at index " << result;
    else
        cout << "Element not found";

    return 0;
}
