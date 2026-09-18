#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {9, 2, 15, 6, 8, 11, 4, 12, 14, 24, 56, 98};
    int n = arr.size();

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Count of even numbers: " << count;

    return 0;
}