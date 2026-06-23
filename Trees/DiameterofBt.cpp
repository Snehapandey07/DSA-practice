/* Date : 23.06.2026 */
/* I am gonna make it */
/* Given the root of a binary tree, return the length of the diameter of the tree.
The diameter of a binary tree is the length of the longest path between any two nodes in a tree. 
This path may or may not pass through the root.The length of a path between two nodes is represented by the number 
of edges between them. */

#include <bits/stdc++.h>
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

class Solution {
public: 
int diameter = 0;
int height(TreeNode*root){
if (root == nullptr){
    return 0;
}
int leftH = height(root -> left);
int rightH = height (root -> right);
diameter = max(diameter, leftH+rightH);
return 1+max(leftH , rightH);
}
int diameterOfBinaryTree(TreeNode*root){
height (root);
return diameter;
}
};

int main() {
    // Creating the tree
    //       1
    //      / \
    //     2   3
    //    / \
    //   4   5

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution obj;

    cout << "Diameter = "
         << obj.diameterOfBinaryTree(root)
         << endl;

    return 0;
}