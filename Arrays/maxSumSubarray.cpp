
// #include <iostream>
// using namespace std;
// int main(){
//     int n = 6;
//     int arr [6] = {1,3,6,8,4,2};

//     int maxSum = INT32_MIN; //Start from smallest possible value

//     for (int start = 0 ; start < n; start++){
//         int current_sum = 0;
//         for (int end = start; end < n; end++){
//             current_sum += arr[end];
//              maxSum = max(current_sum, maxSum);

//             /* for(int i = start; i <= end; i++ ){
//               cout<< arr[i]; /* this loop is for subarray printing
//             }
//             cout<<" ";*/
//         }
//     }
//     cout<< "Max sum of max Subarray is : "<< maxSum << endl; 
// return 0;
// }


/* Max sum subarry using kadane's algorithm*/
#include <bits/stdc++.h>
using namespace std;
int main (){
    int n = 6;
int arr [6] = {1,3,6,8,4,2};
int currentSum = arr[0];
int maxSum = arr[0];

for (int i = 1; i < n; i++) {
    currentSum = max(arr[i], currentSum + arr[i]);
    maxSum = max(maxSum, currentSum);
}
    cout<< maxSum;
    return 0 ;
}
