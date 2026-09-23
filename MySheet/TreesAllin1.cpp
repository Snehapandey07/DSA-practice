/*🌳 Trees — Operations + imps Patterns */
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
Node* insert(Node* root, int value) {
    if (root == nullptr)
        return new Node(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}
void preorder(Node* root) {
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root) {
    if (root == nullptr)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node* root) {
    if (root == nullptr)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
void levelOrder(Node* root) {
    if (root == nullptr)
        return;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* current = q.front();
        q.pop();

        cout << current->data << " ";

        if (current->left)
            q.push(current->left);

        if (current->right)
            q.push(current->right);
    }
}
bool search(Node* root, int target) {
    if (root == nullptr)
        return false;

    if (root->data == target)
        return true;

    if (target < root->data)
        return search(root->left, target);
    else
        return search(root->right, target);
}
int countNodes(Node* root) {
    if (root == nullptr)
        return 0;
    return 1 + countNodes(root->left)
             + countNodes(root->right);
}
int sumNodes(Node* root) {
    if (root == nullptr)
        return 0;
    return root->data
         + sumNodes(root->left)
         + sumNodes(root->right);
}
int countLeaves(Node* root) {
    if (root == nullptr)
        return 0;

    if (root->left == nullptr &&
        root->right == nullptr)
        return 1;
    return countLeaves(root->left)
         + countLeaves(root->right);
}
int height(Node* root) {
    if (root == nullptr)
        return 0;
    return 1 + max(height(root->left),
                   height(root->right));
}
Node* findMin(Node* root) {
    while (root->left != nullptr)
        root = root->left;
    return root;
}
Node* findMax(Node* root) {
    while (root->right != nullptr)
        root = root->right;

    return root;
}
Node* deleteNode(Node* root, int value) {
    if (root == nullptr)
        return nullptr;
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    }
    else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    }
    else {
        // Case 1: No child
        if (root->left == nullptr &&
            root->right == nullptr) {
            delete root;
            return nullptr;
        }
        // Case 2: Only right child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        // Case 3: Only left child
        if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        // Case 4: Two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right =
            deleteNode(root->right, temp->data);
    }
    return root;
}
int main() {
    Node* root = nullptr;
//bst creation
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);
    cout << "========== TREE OPERATIONS ==========\n\n";
    // Traversals
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    cout << "Level Order: ";
    levelOrder(root);
    cout << endl << endl;
    // Search
    int target = 40;
    cout << "Searching for " << target << ": ";
    if (search(root, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";
    cout << endl;
    // Count
    cout << "Number of nodes: "
         << countNodes(root) << endl;
    cout << "Number of leaf nodes: "
         << countLeaves(root) << endl;
    // Sum
    cout << "Sum of all nodes: "
         << sumNodes(root) << endl;
    // Height
    cout << "Height of tree: "
         << height(root) << endl;
    // Minimum
    cout << "Minimum value: "
         << findMin(root)->data << endl;
    // Maximum
    cout << "Maximum value: "
         << findMax(root)->data << endl;
    cout << endl;
    // Delete
    cout << "Deleting 30...\n";
    root = deleteNode(root, 30);
    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;
    return 0;
}