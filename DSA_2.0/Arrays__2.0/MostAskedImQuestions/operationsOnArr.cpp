#include <bits/stdc++.h>
using namespace std;

class ArrayOperations {
public:

    // Array operations will be written here

    int length(vector<int>& arr) {
        // implementation
    }

    // Other operations...
};

int main() {

    vector<int> arr;
    int sz;

    cout << "Enter size of array: ";
    cin >> sz;

    cout << "Enter values of array: ";

    for (int i = 0; i < sz; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    ArrayOperations op;

    // Call operations here

    return 0;
}