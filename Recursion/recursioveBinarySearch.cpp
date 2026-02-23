//Date : 23.02.26
//Recursve Binary Search
// Tc : O(logn) , Sc: O(log n)

#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end) {
    if (start > end)  // element not found
        return -1;

    int mid = start + (end - start) / 2;

    if (arr[mid] == target)  // element found
        return mid;
    else if (target < arr[mid])
        return binarySearch(arr, target, start, mid - 1); // search left
    else
        return binarySearch(arr, target, mid + 1, end);   // search right
}

int main() {
    int n;
    cout << "Enter size of an Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array values (sorted!):" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int target;
    cout << "Enter target element: ";
    cin >> target;

    int index = binarySearch(arr, target, 0, n - 1);

    if (index != -1)
        cout << "Target element found at index " << index << endl;
    else
        cout << "Target element not found" << endl;

    return 0;
}