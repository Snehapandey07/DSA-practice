/*Date : 20.09.2026*/
#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    node* next;

    node(int val) {
        data = val;
        next = nullptr;
    }
};
class Solution {
public:
    node* middleNode(node* head) {
        node* slow = head;
        node* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;          
            fast = fast->next->next;    
        }
        return slow;
    }
};
void printList(node* head) {
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* head = new node(1);
    head->next = new node(2);
    head->next->next = new node(3);
    node* result = Solution().middleNode(head);
    cout << "Middle: " << result->data << endl;
    return 0;
}