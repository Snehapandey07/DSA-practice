/* Date : 25.01.26*/
/*Kadane's Algo , MaxSum subarray problem*/

#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main(){
    int n = 6;
    int arr [6] = {1,3,6,8,4,2};

    int maxSum = INT32_MIN;
     int currentSum = 0;

    for (int i =0; i < n ; i++){
       currentSum += arr[i];
       maxSum = max(currentSum, maxSum);
       if (currentSum < 0){
        currentSum = 0;
       }

    }
    cout<< "Max sum of  Subarray is : "<< maxSum << endl; 
return 0;
}