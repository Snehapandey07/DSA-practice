//Brute Force approcah 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int n = sizeof(arr) / sizeof(arr[0]);
    int maxLength = 0;

    for (int i = 0; i < n; i++) {

        int sum = 0;

        for (int j = i; j < n; j++) {

            sum += arr[j];

            if (sum == k) {
                int length = j - i + 1;
                maxLength = max(maxLength, length);
            }
        }
    }

    cout << "Longest subarray length: " << maxLength << endl;

    return 0;
}