/* Date: 13 feb 2026 */
/* Selection Sort ALgorithm */
#include <iostream>
#include <algorithm>
using namespace std;
void SelectionSort(int arr[], int size){
    
for(int i = 0; i<size-1; i++){ //if we find all ele sorted last ele will be automatically correct 
 int smallestindex = i;
 for(int j = i+1; j<size; j++){
    if(arr[j] < arr[smallestindex]){
        smallestindex = j;
    }
 }
swap(arr[i], arr[smallestindex]);
}
}
int main(){
    int size = 5;
    int arr[size] = {4,8,7,3,9};
    SelectionSort(arr,size);
    cout<< " Sorted array : ";
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}