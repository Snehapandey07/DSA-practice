#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    int minSubarraySum(vector<int> &arr) {
        int minSum = arr[0];
        int CurrentSum = arr[0];
        for (int i = 1; i <arr.size(); i++){
            CurrentSum = min(arr[i] , CurrentSum + arr[i]);
            minSum = min (minSum , CurrentSum);
        }
        return minSum;
    }
};

int main (){
vector<int> arr = {3, -4, 2, -3, -1, 7, -5};
Solution s;
cout << "Minimum Sum Subaaray: "<<s.minSubarraySum(arr);
return 0;
}