// /*date : 23.09.2026*/
// #include <bits/stdc++.h>
// using namespace std;
// struct node {
//    int data;
//    node* left;
//    node*right;
//     node(int x){
//     data = x;
//     right = nullptr;
//     left = nullptr;
//    }
// };
// class Solution {
// public:
// int diameter = 0;
//  int height(node* root) {
//         if (root == nullptr)
//             return 0;
//         int left = height(root->left);
//         int right = height(root->right);
//         diameter = max(diameter, left + right);
//         return 1 + max(left, right);
//     }
//     int diameterOfBinaryTree(node* root) {
//         height(root);
//         return diameter;
//     }
// };
// int main(){
//     node* root = new node(5);
//     root->left = new node(4);
//     root->right = new node(8);
//     root->left->left = new node(11);
//     root->right->left = new node(13);
//     root->right->right = new node(4);
//     root->left->left->left = new node(7);
//     root->left->left->right = new node(2);

//     int targetSum = 22;
//     Solution s;
//     cout << s.diameterOfBinaryTree(root);
//     return 0;
// }

// 

/*24.09.2026*/
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node*right;
    node*left;
    node (int x){
        data = x;
        right = nullptr;
        left = nullptr;
    }
};
class Solution{
    public:
    int diameter = 0;
    int height (node*root){
        if (root == nullptr){
            return 0;
        }
        int left = height (root -> left);
        int right = height (root -> right);
        diameter = max (diameter , left + right);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(node* root){
        height(root);
        return diameter ;
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

     int targetSum = 22;
     Solution s;
     cout << s.diameterOfBinaryTree(root);
     return 0;
 }