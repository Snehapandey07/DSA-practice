/*Date : 03.03.2026  */
/* Trapping Rainwater problem */
/* APproached Used : Two pointers [optimised] TC = O(n) , SC= O(1) */
/* Note By using Bruteforce the TC = O(3N) and SC = O(N)*/
#include <bits/stdc++.h>
using namespace std;

int CalTrapWater(int arr[], int n){
    int leftMax = 0, rightMax = 0, total = 0;
    int l = 0, r = n - 1;

    while(l < r){
        if(arr[l] <= arr[r]){
            if(leftMax > arr[l]){
                total += leftMax - arr[l];
            } else {
                leftMax = arr[l];
            }
            l++;  
        } else {
            if(rightMax > arr[r]){
                total += rightMax - arr[r];
            } else {
                rightMax = arr[r];
            }
            r--;  
        }
    }
    return total;
}

int main(){
    int n = 12;
    int arr[n] = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout << "Amount of Rainwater units Trapped: " << CalTrapWater(arr,n) << endl;
}