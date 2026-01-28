/* Date: 25/01/26 */
/* Binary search program */

#include <iostream>
using namespace std;

int main() {
    int target = 10;
    int arr[] = {4, 8, 8, 10, 50, 64, 78, 82, 92, 95, 100};
    int size = 11;

    int start = 0;
    int end = size - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
