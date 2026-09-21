/*Date : 18.09.26*/
/* Note : carefulwith :  val and index , loops, variable declaration scope,
& logic prev and future */

#include <bits/stdc++.h>
 using namespace std;
 class Solution {
 public:
     int longestConsecutive(vector<int>& nums) {
         unordered_set<int> st(nums.begin(), nums.end());
         int maximum = 0;
         for (int x : st) {
             if (st.find(x - 1) == st.end()) {
                 int count = 1;
                 while (st.find(x + 1) != st.end()) {
                     x++;
                     count++;
                 }
                 maximum = max(maximum, count);
             }
         }
         return maximum;
     }
 };
 int main (){
    vector<int> nums = {3,543,3,25,63,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,10,11,12};
    Solution s;
     cout<<"Longest consequtive sequence is : "<<s.longestConsecutive(nums);
     return 0;
 }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
// int longestConsecSeq(vector<int>&nums){
//     unordered_set <int> st (nums.begin() , nums.end());
//     int maximum = 0 ;
//     for (int x : st){
//         if(st.find(x-1) == st.end()){
//         int count = 0;
//         while (st.find(x+1) != st.end()){
//             x++;
//             count++;
//         }
//         }
//     }
//     return maximum;
// }
// };
// int main(){
//     vector<int> nums = {3,543,3,25,63,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,10,11,12};
//     Solution s;
//     cout<<"Longest consequtive sequence is : "<<s.longestConsecSeq(nums);
//     return 0;
// }