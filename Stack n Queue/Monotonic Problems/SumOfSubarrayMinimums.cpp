/* Date: 31.03.26 */
#include <bits/stdc++.h>
using namespace std;

int sumOfMinSubarr(int n, int arr[]) {
    const int MOD = 1e9 + 7;
    long long sum = 0;

    for (int i = 0; i < n; i++) {
        int mini = arr[i];

        for (int j = i; j < n; j++) {
            mini = min(mini, arr[j]);  // update minimum
            sum = (sum + mini) % MOD;
        }
    }

    return sum;
}

int main() {
    int n = 4;
    int arr[n] = {3,1,2,5};

    cout << "Sum of minimum Subarray: " 
         << sumOfMinSubarr(n, arr) << endl;

    return 0;
}