#include <bits/stdc++.h>
using namespace std;

class ArrayOperations {
public:

    int length(vector<int>& arr) {
       int sz = arr.size();
       cout<<" The size of array is: "<<sz<<endl;
    }

void show (vector <int>& arr, int sz){
    cout<< "Printing array values...."<<endl;
    for(int i = 0; i<sz; i++){
        cout<<arr[i]<<endl;
    }
}

int search(vector<int>& arr, int sz, int target) {
    auto it = find(arr.begin(), arr.end(), target);

    if (it != arr.end()) {
        return it - arr.begin();
    }

    return -1;
}

void sortarr(vector<int> arr){
    sort(arr.begin(), arr.end());
    cout<<"Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
}

};
int main() {
    vector<int> arr;
    int sz;

    cout << "Enter size of array: ";
    cin >> sz;

    cout << "Enter values: ";

    for (int i = 0; i < sz; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    // Array operations
    int minimum = *min_element(arr.begin(), arr.end());
    int maximum = *max_element(arr.begin(), arr.end());
    int total = accumulate(arr.begin(), arr.end(), 0);
    int c = count(arr.begin(), arr.end(), target);

    reverse(arr.begin(), arr.end());

    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;
    cout << "Sum: " << total << endl;
    cout << "Count of target: " << c << endl;

    ArrayOperations op;

    op.length(arr);
    op.show(arr, sz);
    op.sortarr(arr);

    int result = op.search(arr, sz, target);

    if (result != -1) {
        cout << "Element found at index: " << result;
    }
    else {
        cout << "Element not found";
    }

    return 0;
}