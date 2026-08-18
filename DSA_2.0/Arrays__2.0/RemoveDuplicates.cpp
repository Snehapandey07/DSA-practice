/* Remove duplicates from sorted array */
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4};

    int n = arr.size();

    int j = 0;

    for (int i = 1; i < n; i++) {

        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "Array after removing duplicates: ";

    for (int i = 0; i <= j; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}