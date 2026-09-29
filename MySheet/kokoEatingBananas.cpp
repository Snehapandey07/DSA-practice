/*What is the minimum eating speed k such that Koko can finish all bananas within h hours?*/
/*Date : 29.09.2026*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
    public :
    bool canDo(vector<int>&piles, int k , int h){
        long long hours = 0;     //decide carefully the data type
        for (int p : piles){
            hours += (p + k -1) / k;
        }
        return hours <= h; 
    }
    int minEatingSpeed (vector <int>&piles, int h ){
        int low = 1;
        int high =*max_element(piles.begin(), piles.end());
        while (low < high){                //make sure it doesn't fall into infinite loop 
            int mid = low + (high - low) / 2;
            if (canDo(piles,mid, h)){
                high = mid;
            }  
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};
int main(){
    vector <int> piles = {30,11,23,4,20};
    int h = 6;
    Solution s ;
    cout <<"Output: "<< s.minEatingSpeed(piles, h);
    return 0 ;
}