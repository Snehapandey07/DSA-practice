/* Merge Sort Algorithm */
#include <iostream>
using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int len1 = mid - start + 1;
    int len2 = end - mid;

    // Create temporary arrays
    int* left = new int[len1];
    int* right = new int[len2];

    // Copy values
    for (int i = 0; i < len1; i++)
        left[i] = arr[start + i];

    for (int i = 0; i < len2; i++)
        right[i] = arr[mid + 1 + i];

    int i = 0, j = 0;
    int k = start;

    // Merge the two arrays
    while (i < len1 && j < len2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    // Copy remaining elements
    while (i < len1) {
        arr[k++] = left[i++];
    }

    while (j < len2) {
        arr[k++] = right[j++];
    }

    delete[] left;
    delete[] right;
}

void mergeSort(int arr[], int start, int end) {
    if (start >= end)
        return;

    int mid = start + (end - start) / 2;

    // Left part
    mergeSort(arr, start, mid);

    // Right part
    mergeSort(arr, mid + 1, end);

    // Merge both parts
    merge(arr, start, mid, end);
}

int main() {
    int arr[] = {5, 2, 9, 1, 3, 6};
    int size = 6;

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
