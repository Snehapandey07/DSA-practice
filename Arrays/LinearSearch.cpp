// /*Date : 22.01.26*/
// /*Linear Search algorithm*/

// #include <iostream>
// using namespace std;

// int main(){
// int marks[] = {89,43,65,76};
// int size = 4;
// int target = 43;
// for(int i = 0; i<size; i++){
//     if(marks[i] == target){
//        return i;
//         cout<<"we found a target value\n"<<target<<endl;
//     }
    
// }
// return 0;
//






/*Date : 23.01.26 */
/*Linear Search algorithm , gives index value*/

#include <iostream>
using namespace std;

int LinearSearch (int arr [], int size, int target){
    for(int i = 0; i< size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}
int main(){
    // int arr[] = {4,2,7,1,8,2,6,};
    // int size = 7;
    // int target = 8;
    int size; 
    cout<<"enter the size of array: "<<endl;
    cin>>size;
    int arr[size] = {};
    cout<<"enter array : "<<endl;
    cin>>arr;
    int target;
    cout<<"Enter target you want to search : "<<endl;
    cin>>target
    cout<< LinearSearch(arr, size, target)<<endl;
    return 0 ;
}

