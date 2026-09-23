/*date : 23.09.2026*/
#include <bits/stdc++.h>
using namespace std;
struct node {
   int data;
   node* left;
   node*right;
    node(int x){
    data = x;
    right = nullptr;
    left = nullptr;
   }
};
class Solution {
public:
    int height(node* root) {

        if (root == nullptr)
            return 0;

        int left = height(root->left);
        int right = height(root->right);
        if (abs(left - right) > 1)
            return -1;
        if (left == -1 || right == -1)
            return -1;

        return 1 + max(left, right);
    }

    bool isBalanced(node* root) {
        return height(root) != -1;
    }
};
int main(){
    node* root = new node(5);
    root->left = new node(4);
    root->right = new node(8);
    root->left->left = new node(11);
    root->right->left = new node(13);
    root->right->right = new node(4);
    root->left->left->left = new node(7);
    root->left->left->right = new node(2);
    Solution s;
    cout << s.isBalanced(root);
    return 0;
}