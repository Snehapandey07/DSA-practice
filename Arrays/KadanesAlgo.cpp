/* Date : 25.01.26*/
/*Kadane's Algo , MaxSum subarray problem*/
/*Given an array, find a subarray with the maximum sum*/

#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {

    int n = 6;
    int arr[6] = {-5, 2, 3, -10, 4,5};

    int maxSum = INT_MIN;
    int currentSum = 0;

    for (int i = 0; i < n; i++) {

        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Max sum of Subarray is : " << maxSum << endl;

    return 0;
}