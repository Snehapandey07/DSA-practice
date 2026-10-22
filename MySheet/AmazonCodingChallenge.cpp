/*Amazon Demo test question - 22.10.2026*/
/*PS:- Given an array of binary digits, O and 1, rort the array so that all zeros 
are at one end and allones are at the other. Which end does ndt matter. To sort the 
array, swap any two adjacent elements. Determine the minimum number of swaps to sort 
the array.*/

#include <bits/stdc++.h>
using namespace std;
int minMoves(vector<int> arr) {
    int ones = 0;
    int swaps = 0;

    for (int x : arr) {
        if (x == 1) {
            ones++;
        } else {
            swaps += ones;
        }
    }

    int zeros = count(arr.begin(), arr.end(), 0);
    int totalOnes = count(arr.begin(), arr.end(), 1);

    return min(swaps, zeros * totalOnes - swaps);
}