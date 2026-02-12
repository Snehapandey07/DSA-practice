#include <iostream>
using namespace std;

int Search(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;

    while (start <= end){
        int mid = start + (end - start) / 2;

        cout << "Start: " << start 
             << " End: " << end 
             << " Mid: " << mid 
             << " Value: " << arr[mid] << endl;

        if (target == arr[mid]){
            return mid;
        }

        if (arr[start] <= arr[mid]){

            if (arr[start] <= target && target < arr[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        // Right half sorted
        else{
            if (arr[mid] < target && target <= arr[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }

    return -1; 
}

int main(){
    int size = 8;
    int arr[8] = {3,4,5,6,7,0,1,2};
    int target = 0;

    int index = Search(arr, size, target);

    if(index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
