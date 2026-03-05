/* Date : 5.03.26*/
#include <iostream>
using namespace std;
    int main(){
    int size = 10;
    int arr[10] = {7,5,8,2,9,3,4,5,1,6};
    int target = 7;
    for (int i = 0; i < size ; i ++){
        for (int j = i+1 ; j < size ; j++){
            if (arr[i] + arr[j] == target){
                  cout << arr[i] << " + " << arr[j] << " = " << target << endl;
            }
        }
    }
}
