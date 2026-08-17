#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    vector <int> arr = {9,2,5,1,3};
    int n = arr.size();
    for(int i = 0; i<n; i++){
            sum += arr[i];
        }
    cout<<"sum of all elemnts of an array: "<<sum;
    return 0 ;
}