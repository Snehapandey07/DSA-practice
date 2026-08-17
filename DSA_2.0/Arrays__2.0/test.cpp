#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int largest = 0;
    vector <int> arr = {9, 2, 15, 1, 7,18};
    int n = arr.size();
    for(int i = 0; i<n; i++){
            if (arr[i] > largest){
                largest = arr[i];
            }
        }
         cout<<"largest element in the array is :"<< largest;
    return 0 ;
}