#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 2, 15, 1, 7, 18};
    int n = arr.size();

    int largest = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest;

    return 0;
}