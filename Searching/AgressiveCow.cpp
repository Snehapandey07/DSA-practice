/* Date : 13-02-26 */
/* Aggressive cow problem using Binary search */

#include <iostream>
#include <algorithm>
using namespace std;

bool isPossible(int arr[], int size, int c, int mid) {
    int cowCount = 1;              
    int lastPos = arr[0];          

    for (int i = 1; i < size; i++) {
        if (arr[i] - lastPos >= mid) {
            cowCount++;
            lastPos = arr[i];

            if (cowCount == c) {
                return true;
            }
        }
    }
    return false;
}

int getDistance(int arr[], int size, int c) {
    sort(arr, arr + size);

    int start = 1;
    int end = arr[size - 1] - arr[0];
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (isPossible(arr, size, c, mid)) {
            ans = mid;          
            start = mid + 1;    
        }
        else {
            end = mid - 1;      
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 4, 8, 9};
    int size = 5;
    int cows = 3;

    cout << "Largest Minimum Distance: "
         << getDistance(arr, size, cows);

    return 0;
}
