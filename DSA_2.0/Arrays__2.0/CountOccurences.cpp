#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 2, 15, 6, 8, 11, 2, 2, 4, 12, 14, 24, 56, 98};

    int n = arr.size();
    int target = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;
        }
    }

    cout << "Count of occurrences: " << count;

    return 0;
}