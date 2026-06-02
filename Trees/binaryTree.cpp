#include <bits/stdc++.h>
using namespace std;

class TreeNode{
public:
int val ;
TreeNode*left;
TreeNode*right;
TreeNode(int x){
    val = x;
    left = NULL;
    right = NULL;
}
};
void preorder(TreeNode*root){
    if(root == NULL){
        return;
    }
    cout<<root -> val<<" ";
    preorder(root -> left);
    preorder(root -> right);
}
int main(){
     TreeNode* root = new TreeNode(1);
     TreeNode* node2 = new TreeNode(2);
      TreeNode* node3 = new TreeNode(3);
       TreeNode* node4 = new TreeNode(4);
        TreeNode* node5 = new TreeNode(5);
         TreeNode* node6 = new TreeNode(6);

          root->left = node2;
    root->right = node3;

    node2->left = node4;
    node2->right = node5;

    node3->right = node6;

       cout << "Preorder Traversal: ";
    preorder(root);

    return 0;
}