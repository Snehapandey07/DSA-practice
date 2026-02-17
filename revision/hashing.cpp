/* Date : 17.02.26 */
/* Hashing */
#include <iostream>
using namespace std;

int main() {
    int n = 6;
    int arr[n] = {4, 65, 23, 6, 4, 7};

    // Print original array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Hash array (frequency array)
    // Size should be greater than maximum element in arr
    int hash[100] = {0};   // Increased size for safety

    // Store frequency
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;

    while (q--) {
        int number;
        cin >> number;   // ✅ semicolon fixed

        // Check bounds to avoid crash
        if (number >= 0 && number < 100)
            cout << hash[number] << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}
