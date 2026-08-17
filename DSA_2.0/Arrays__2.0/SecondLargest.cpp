#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 2, 15, 6, 8, 11, 4};
    int n = arr.size();

    int largest = arr[0];
    int secondlargest = arr[1];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest && secondlargest < largest ) {
            secondlargest = arr[i];
        }
    }

    cout << "Second Largest element: " << secondlargest;

    return 0;
}