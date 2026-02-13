#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {

    int pivot = arr[end];          
    int idx = start - 1;           

    for(int j = start; j < end; j++) {
        if(arr[j] < pivot) {
            idx++;
            swap(arr[idx], arr[j]);
        }
    }

    swap(arr[idx + 1], arr[end]);

    return idx + 1;   
}

void QuickSort(int arr[], int start, int end) {

    if(start < end) {

        int p = partition(arr, start, end);

        QuickSort(arr, start, p - 1);   
        QuickSort(arr, p + 1, end);     
    }
}

int main() {

    int arr[] = {6, 3, 9, 5, 2, 8};
    int size = 6;

    QuickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
