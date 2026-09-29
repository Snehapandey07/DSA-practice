/*We need the minimum ship capacity that can ship all packages within days.*/
/*Date: 29.09.2026*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
    public :
    bool canDO (vector <int>weights ,int capacity , int D ){
    int days = 1;
    int current = 0;
    for (int w : weights){
        if (current + w > capacity){
            days++;
            current = 0;
        }
        current += w;
    }
    return days <= D;
    }
    int shipWthinDays(vector <int> weights, int days){
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low < high){
            int mid = low + (high - low) / 2;
            if (canDO(weights, mid, days)){
                high = mid;
            }else{
              low = mid + 1;
            }
        }
        return low;
    }
};
int main (){
    vector <int> weights = {1,2,3,4,5,6,7,8,9,10};
    int days = 5 ;
    Solution s ;
    cout << "Output: "<<s.shipWthinDays(weights, days);
    return 0;
}