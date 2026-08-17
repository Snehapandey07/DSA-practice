#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9,0};

    int n = arr.size();
    int left = 0;
    int right = n - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}