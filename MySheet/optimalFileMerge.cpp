/*Given an integer array files[], where files[i] represents the 
size of the i-th file, merge all the files into a single file 
with the minimum total computation cost.*/
/*Date: 29.10.2026*/

#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int minComputation(vector<int> &files){
          priority_queue<int, vector<int>, greater<int>> pq;
          for (int file : files){
            pq.push(file);
          }
          int totalCost = 0;
          while (pq.size() > 1){
            int first = pq.top();
            pq.pop();
            int second = pq.top();
            pq.pop();
            int merged = first + second ;
            totalCost += merged;
            pq.push(merged);
          }
          return totalCost;
    }
};
int main (){
    Solution s ;
    vector <int> files = {3,2,4}; 
    cout << "minimum total cost required to merge files :"<<s.minComputation(files)<<endl;
    return 0 ;
}