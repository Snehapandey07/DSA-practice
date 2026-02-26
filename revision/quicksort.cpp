#include <iostream>
using namespace std;

int partition(int arr[], int start, int end) {
    int pivot = arr[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quicksort(int arr[], int start, int end) {
    if (start < end) {
        int pividx = partition(arr, start, end);

        quicksort(arr, start, pividx - 1);
        quicksort(arr, pividx + 1, end);
    }
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = 7;

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}