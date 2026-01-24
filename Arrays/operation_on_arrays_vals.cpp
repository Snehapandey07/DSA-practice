/*Date : 23.01.26*/
/*Perform operations on the values in the array */

/*#include <iostream>
using namespace std; 

int sum(int arr[], int size) {
    int result = 0;        
    for (int i = 0; i < size; i++) {
        result += arr[i];   
    }
    return result;        
}
int subtract (int arr[], int size){
    int result = 0;
    for(int i = 0; i<size; i++){
        result -= arr[i];
    }
}
int product(int arr[], int size) {
    int result = 1;          
    for (int i = 0; i < size; i++) {
        result *= arr[i];  
    }
    return result;         
}
int divide(int arr[], int size) {
    if (size == 0) return 0;   // safety check

    int result = arr[0];      // start from first element

    for (int i = 1; i < size; i++) {
        if (arr[i] == 0) {
            cout << "Division by zero error!" << endl;
            return 0;
        }
        result /= arr[i];
    }
    return result;
}

int main(){
    int size = 5;
    int arr[] = {1,2,3,4,5};
    int add = sum(arr, size);
    cout<<"Addition : "<<add<<endl;
    int multiply = product(arr, size);
    cout<<"Product: "<<multiply<<endl;
    int minus = subtract(arr,size);
    cout<<"Subtraction between the value in a array: "<<minus<<endl;
    int division = divide  (arr, size );
    cout<<"Divsion between numbers in the array : "<<division;
    return 0 ;
}*/

/*To find unique value in an array */
#include <iostream>
using namespace std; 

void printUnique(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
}

 int main(){
    int size = 8;
    int arr[] = {1,1,2,2,3,3,4,5};
    
    cout<<"The Unique value in an array are : ";
    printUnique(arr, size);
    return 0;
 }




