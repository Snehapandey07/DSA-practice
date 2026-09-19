/* Date : 19.09.2026 */
#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
   vector <vector<int>> mergeinterv (vector<vector<int>> intervals){
    sort (intervals.begin(), intervals.end());
    vector <vector<int>> result;
    result.push_back(intervals[0]);
    for (int i = 0; i < intervals.size(); i++){
        if (intervals[i][0] <= result.back()[i]){
          result.back()[i] = max(result.back()[i], intervals[i][1]);
        }
        else{
            result.push_back(intervals[i]);
        }
    }
    return result;
   }
};

 int main() {
    vector<vector<int>> intervals = {{1,3}, {2,6}, {8,10}, {9,12}};

    Solution s;
    vector<vector<int>> result = s.mergeinterv(intervals);

    for (auto i : result) {
        cout << "[" << i[0] << "," << i[1] << "] ";
    }

    return 0;
}