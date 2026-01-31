/*Linear search algoeithm : searching and printing index value */
/*Date : 22.01.260*/

#include <iostream>
using namespace std;
int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
int size ;
cout << "Enter the size of an array: "<<endl;
cin>>size;
 int arr[size];
cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
int target;
cout<< "Enter the value you want to search : ";
cin>> target;
cout<<linearSearch(arr, size, target) << endl;
return 0;
}