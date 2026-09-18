/*Date:18.09.2026 */
#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int size, int k) {

    k = k % size;

    reverse(arr, arr + size);
    reverse(arr, arr + k);
    reverse(arr + k, arr + size);
}

int main() {

    int size = 7;
    int arr[size] = {1, 2, 3, 4, 5, 6,7};

    int k = 3;

    rotateArray(arr, size, k);

    cout << "Rotated array: ";

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}