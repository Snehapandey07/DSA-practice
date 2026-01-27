
#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int arr [6] = {1,3,6,8,4,2};

    int maxSum = INT32_MIN;

    for (int start = 0 ; start < n; start++){
        int current_sum = 0;
        for (int end = start; end < n; end++){
            current_sum += arr[end];
             maxSum = max(current_sum, maxSum);

            /* for(int i = start; i <= end; i++ ){
              cout<< arr[i]; /* this loop is for subarray printing
            }
            cout<<" ";*/
        }
    }
    cout<< "Max sum of max Subarray is : "<< maxSum << endl; 
return 0;
}