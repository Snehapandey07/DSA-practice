/*Kadane's algorithm */
/* Date : 31.01.26*/
#include <iostream>
using namespace std; 
int main(){
    int size = 4;
    int arr[size] = {2,2,6,70};
    int currentSum = 0;
    int maxSum = INT16_MIN;
    for (int i = 0; i<size ; i++){
        currentSum +=arr[i];
        maxSum = max(currentSum, maxSum);
        if (currentSum < 0){
            currentSum  = 0;
        }
    }
    cout<< "Max sum of subarray is : "<<maxSum << endl;
    return 0;
}