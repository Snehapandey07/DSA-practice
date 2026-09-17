/* Tc : o(n) */
/*
#include <iostream>
include <climits>
#include <algorithm>
using namespace std;

int main() {
    int size = 10;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int arr[size] = {67, 2, 87, 543, 24, 788, 2938, 45,34,-1};

    for (int i = 0; i < size; i++) {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "Smallest element is: " << smallest << endl;
    cout << "Largest element is: " << largest << endl;

    return 0;
}

/* Date : 17.09.2026*/
/* Time complexity : O(n)*/
#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int size = 10;
    int arr[size] = {67, 2, 87, 543, 24, 788, 2938, 45,34,-1};

    int max = arr[0];
    int min = arr[0];
     
    for (int i = 1; i < size; i++){
        if (max < arr[i]){
            max = arr[i];
        }
        if (min > arr[i]){
            min = arr[i];
        }
    }
    cout << "Smallest e;ement is: "<<min << endl;
    cout << "Largest element is: "<<max << endl;

    return 0;
}