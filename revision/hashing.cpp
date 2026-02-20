/* Date : 17.02.26 */
/* numbers array Hashing */

/*
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
        cin >> number;   

        // Check bounds to avoid crash
        if (number >= 0 && number < 100)
            cout << hash[number] << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}

*/

/* Date :18.02.26 - Character Hashing */
// #include <iostream>
// using namespace std;

// int main() {
//     string s;
//     cout << "Enter string: ";
//     cin >> s;

//     int hash[26] = {0};

//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             hash[s[i] - 'a']++;
//         }
//     }

//     int q;
//     cout << "Enter number of queries: ";
//     cin >> q;
// z
//     while (q--) {
//         char c;
//         cout << "Enter character: ";
//         cin >> c;

//         if (c >= 'a' && c <= 'z') {
//             cout << "Frequency of " << c << " = " 
//                  << hash[c - 'a'] << endl;
//         } else {
//             cout << "Invalid character (only lowercase allowed)" << endl;
//         }
//     }

//     return 0;
// }

