#include <bits/stdc++.h>
using namespace std;

vector<int> func(int arr[], int n) {
    vector<int> st;

    for (int i = 0; i < n; i++) {
        int curr = arr[i];
        bool destroyed = false;

        while (!st.empty() && curr < 0 && st.back() > 0) {
            if (abs(st.back()) < abs(curr)) {
                st.pop_back();
            }
            else if (abs(st.back()) == abs(curr)) {
                st.pop_back();
                destroyed = true;
                break;
            }
            else {
                destroyed = true;
                break;
            }
        }

        if (!destroyed) {
            st.push_back(curr);
        }
    }

    return st;
}

int main() {
    int n = 10;
    int arr[] = {4, 7, 1, 1, 2, -3, -7, 17, 15, -16};

    vector<int> result = func(arr, n);

    // Print result
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}