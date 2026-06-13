/* date : 13.06.26  */
/*Time complexity : O(n), Space complexity : O(H) where H is the height of the tree*/

#include <iostream>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
     val = x;
    left = NULL;
    right = NULL;
    }
};

class Solution{
public:
bool haspathSum(TreeNode* root, int target){
    if(root == NULL){
        return 0;
    }
    if(root -> left == NULL && root -> right == NULL){
        return target == root -> val;
    }
    return haspathSum(root -> left , target - root-> val) ||
           haspathSum(root -> right , target - root-> val);
}
};
int main(){

    TreeNode* root = new TreeNode(5);

    root->left = new TreeNode(4);
    root->right = new TreeNode(8);

    root->left->left = new TreeNode(11);

    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);

    Solution obj;

    int target = 20;

    if(obj.haspathSum(root, target)){
        cout << "Path Exists";
    }
    else{
        cout << "Path Does Not Exist";
    }

    return 0;
}