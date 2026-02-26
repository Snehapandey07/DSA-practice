/* Date : 26.02.26*/

#include <iostream>
using namespace std;

int partition (int arr[], int start, int end ){
int i = start -1 ; 
int pivot = arr[end ];
for ( j < start; j < end ; j++){
    if (arr[j]<= pivot)
}
}

void quicksort(int arr[], int start, int end, int pividx) {
    if (start < end){
pividx = partition(arr, start, end);
quicksort(arr, start ,pividx-1);
quicksort(arr, end ,pividx+1);
    }
    
}

int main() {
    int size = 7;
    int arr[size] = {38, 27, 43, 3, 9, 82, 10};
    int start = 
    int end = start -1;
    int pividx = ;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}