/* Date : 20.09.2026 */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void printList(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node* head = first;
    Node* tail = third;

    cout << "Initial list: ";
    printList(head);

    // Traverse
    cout << "After traversal: ";
    printList(head);


    // Insert at beginning
    Node* newNode = new Node(5);
    newNode->next = head;
    head = newNode;

    cout << "After inserting 5 at beginning: ";
    printList(head);


    // Insert at end
    newNode = new Node(40);

    tail->next = newNode;
    tail = newNode;

    cout << "After inserting 40 at end: ";
    printList(head);


    // Search
    int key = 20;
    bool found = false;

    Node* temp = head;

    while (temp != nullptr) {
        if (temp->data == key) {
            found = true;
            break;
        }
        temp = temp->next;
    }

    cout << "Searching for " << key << ": ";
    if (found)
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;


    // Delete first node
    temp = head;
    head = head->next;
    delete temp;
    cout << "After deleting first node: ";
    printList(head);


    // Reverse linked list
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
        Node* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }
    head = prev;

    cout << "After reversing: ";
    printList(head);

    return 0;
}