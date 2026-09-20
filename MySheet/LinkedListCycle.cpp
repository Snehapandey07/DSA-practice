/* 19.09.2026 */
/* fast traverse quickly while slow still remains in the middle so if
fast get equals to slow position that means list has cycle  */
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node*next;
    node (int val){
        data = val;
        next = nullptr;
    }
};

bool detectcycle(node*head){
    node*slow = head;
    node*fast = head;
    while (fast!= nullptr && fast->next != nullptr){
        slow = slow -> next;
        fast = fast ->next->next;
        if (slow == fast ){
            return true;
        }
    }
    return false;
}

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
    bool result = detectcycle(head);
    cout << result << endl;
    return 0;
}