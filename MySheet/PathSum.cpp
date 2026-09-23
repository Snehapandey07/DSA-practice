/* pathsum == targetsum (given) then retun tru otherwise false */
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
class Solution{
    public:
    bool hasPathSum(node* root , int targetSum){
        if (root == nullptr){
            return 0;
        }
        if (root -> left == nullptr && root -> right == nullptr){
            root -> data = targetSum;
        }
        int remain = targetSum - root-> data;
        return hasPathSum(root->left, remain) || hasPathSum(root->right, remain);
    }
};