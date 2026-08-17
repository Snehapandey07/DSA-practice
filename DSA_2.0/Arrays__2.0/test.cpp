#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    vector <int> arr = {9, 2, 15,5,-1,-2,1, 7,18};
      int smallest = arr[0] ;
    int n = arr.size();
    for(int i = 0; i<n; i++){
            if (arr[i] < smallest){
                smallest = arr[i];
            }
        }
         cout<<"largest element in the array is :"<< smallest;
    return 0 ;
}