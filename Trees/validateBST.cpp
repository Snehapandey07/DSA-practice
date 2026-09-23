#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node*left;
    node*right;
    node(int x){
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
class Solution {
public:
    bool check(node* root, long long min, long long max) {
        if (root == nullptr)
            return true;
        if (root->val <= min || root->val >= max)
            return false;
        return check(root->left, min, root->val) &&
               check(root->right, root->val, max);
    }
    bool isValidBST(node* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};
int main(){
    
    Solution s;
    return 0;

}