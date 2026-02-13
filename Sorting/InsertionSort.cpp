/* Date : 13.02.26 */
/* Insertion Sort */
#include <iostream>
using namespace std;
void InsertionSort(int arr[], int size){
    for(int i = 1; i < size; i++){
        int current = arr[i] , previous = i-1;
        while(previous >= 0 && arr[previous]> current){
            arr[previous+1] =arr[previous];
            previous--;
        }
        arr[previous+1] = current ;
    }
}
int main(){
    int size = 5;
    int arr[size] = {2,7,4,8,3};
    InsertionSort(arr, size);
    cout<<"Sorted array: ";
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}