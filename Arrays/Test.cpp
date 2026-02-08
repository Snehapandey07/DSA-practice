/* 7 feb 2026 */
/* Kadane's algorithm : maximum subarray */

#include <iostream>
#include <climits>
using namespace std;

int main() {
    int size = 6;
    int arr[6] = {10,49,0,-1,4,9};

    int max_sum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < size; i++) {
        currentSum += arr[i];
        max_sum = max(currentSum, max_sum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Max sum of max subarray is : " << max_sum << endl;
    return 0;
}
