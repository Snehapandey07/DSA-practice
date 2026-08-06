// Date: 23-02-2026
// Program: Check array if it is sorted or not using recursion
// Time Complexity = O(n) and space complexity = O(4)

#include <iostream>
using namespace std;

// Function to check if array is sorted using recursion
bool isSorted(int arr[], int n) {
    if (n == 1) // single element is sorted
        return true;
    return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
}

int main() {
    int n;
    cout << "Enter size of an Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (isSorted(arr, n)) {
        cout << "The entered array is sorted" << endl;
    } else {
        cout << "Entered array is not sorted" << endl;
    }

    return 0;
}