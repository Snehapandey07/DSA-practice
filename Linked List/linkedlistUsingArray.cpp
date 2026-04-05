/* Date : 05.04.26 */
/* Implementation of linked list using array and traversing and length */

#include <bits/stdc++.h>
using namespace std;

// Define Node structure
struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Convert array to linked list
Node* convertArr2LL(vector<int> &arr) {
    if (arr.size() == 0) return NULL;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

// Traverse and print linked list
void traverse(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Find length of linked list
int length(Node* head) {
    int cnt = 0;
    Node* temp = head;

    while (temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    Node* head = convertArr2LL(arr);

    cout << "Linked List: ";
    traverse(head);

    cout << "Length: " << length(head) << endl;

    return 0;
}