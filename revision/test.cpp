/* Date : 31.01.26 */
/* linear search */

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for (int i = 0; i < size ; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int size = 8;
    int arr[8] = {1,4,5,89,432,76,432,90};
    int target = 76;
    int result = linearSearch(arr, size, target);
    cout<< "element "<< target <<"found at " << result<<endl;
    return 0;
}
