#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {342,213,534,23,454,65,5};
    int k = 70;
    for (int i = 0; i<arr.size(); i++){
        for (int j = 0; j<i; j++){
            if(arr[i] + arr[j] == k){
                return true;
            }
            else{
                cout<<"Not Found!";
            }
        }
    }
    return 0;
}
