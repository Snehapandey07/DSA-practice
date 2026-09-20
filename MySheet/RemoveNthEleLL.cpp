#include <bits/stdc++.h>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* slow = &dummy;
        ListNode* fast = &dummy;
        
         for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    while (fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    ListNode* temp = slow->next;
    slow->next = slow->next->next;
    delete temp;

    return dummy.next;
    }
};
void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    // 1 → 2 → 3 → 4 → 5
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    int n = 2;
    cout << "Before: ";
    printList(head);
    Solution obj;
    head = obj.removeNthFromEnd(head, n);
    cout << "After: ";
    printList(head);
    return 0;
}
