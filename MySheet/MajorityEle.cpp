/*Date : 19.09.2026*/
/* Bayes Moore voting Algorithm , Tc = O(n), Sc = O(1)*/
/* candidate : possible majority ele
   count = its current votes */
/* Why it works:- Different elements cancel each other out.*/
/*TC: O(n)
SC: O(1)*/

#include <bits/stdc++.h>
 using namespace std;
class Solution {
 public:
     int majorityElement(vector<int>& nums) {
     int candidate = 0;
     int count = 0;

     for (int x : nums) {
         if (count == 0)
             candidate = x;

         if (x == candidate)
             count++;
         else
             count--;
     }     return candidate;
}
 };
  int main(){
 vector<int>nums = {8,546,894,879,77,7,7,7,7,1,7,8,2,5,5,2,2,2,0,8,8,8,7,7,7,7};
 vector<int>no = {1,2,3,4,5,6};
 Solution s ;
 cout << "Majority Element: "<<s.majorityElement(nums);
 return 0;
 }

// #include <bits/stdc++.h>
// using namespace std;
// class Solution {
//     public:
//     int majorityEle(vector<int>&nums){
//         int candidate = 0;
//         int count = 0;
//         for (int x : nums){
//             if (count == 0){
//                 candidate = x;
//             }
//             if (x == candidate){
//                 count++;  //Same as candidate → +1 vote
//             }
//             else {
//                 count--; //Different → -1 vote
//             }
//         }
//         return candidate; 
//     }
// };
// int main (){
//      vector<int>nums = {8,546,894,879,77,7,7,7,7,1,7,8,2,5,5,2,2,2,0,8,8,8,7,7,7,7};
// vector<int>no = {1,2,3,4,5,6};
// Solution s ;
//  cout << "Majority Element: "<<s.majorityEle(nums);
//  return 0;
// }