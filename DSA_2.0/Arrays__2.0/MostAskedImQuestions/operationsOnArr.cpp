#include <bits/stdc++.h>
using namespace std;

class ArrayOperations {
public:

    int length(vector<int>& arr) {
       
    }
int show(vector<int>& arr, int sz){
  for (int i = 0; i<sz ; i++){
    cout<< "The values are: "<<arr[i];
  }
}
};

int main() {

    vector<int> arr;
    int sz;

    cout << "Enter size of array: ";
    cin >> sz;

    cout << "Enter values of array: ";

  for(int i =0; i<sz; i++){
    int x;
    cin>> x;
    arr.push_back(x);
  }

    ArrayOperations ap;
    ap.show(arr, sz);
  
    return 0;
}