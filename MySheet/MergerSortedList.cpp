/* Date : 20.09.2026 */
/*merge two lists */
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
node*mergeTwoLists(node*l1, node*l2){
    node dummy(0);
    node* curr = &dummy;
    while (l1 != nullptr && l2 != nullptr) {
       if (l1 <= l2){
        curr -> next = l1;
        l1 = l1->next;
       }else{
        curr->next = l2;
        l2 = l2->next;
       }
       curr = curr->next;
}
if (l1 = nullptr){
    curr -> next = l1;
}
else{
       curr -> next = l2;
}
    return dummy.next;
}

void printList(node*head) {
    while (head != nullptr) {
        cout << head->data<< " ";
        head = head->next;
    }
}
int main(){
    node* l1 = new node(1);
    l1->next = new node(3);
    l1->next->next = new node(5);

    // List 2: 2 → 4 → 6
    node* l2 = new node(2);
    l2->next = new node(4);
    l2->next->next = new node(6);

    node* result = mergeTwoLists(l1, l2);
    cout << "Merged List: ";
    printList(result);
}