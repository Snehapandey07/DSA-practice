#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 2, 5, 1, 3};
    int n = arr.size();
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    cout << "Sum of all elements: " << sum;

    return 0;
}