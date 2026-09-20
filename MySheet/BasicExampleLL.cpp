/* Date : 20.09.2026*/

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {

    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    first->data = 10;
    second->data = 20;
    third->data = 30;

    first->next = second;
    second->next = third;
    third->next = nullptr;

    Node* head = first;
    Node* head = nullptr;
    Node* tail = nullptr;

    /*traverse*/
    Node* temp = head;
    while (temp != nullptr) {
    cout << temp->data << " ";
    temp = temp->next;
    }

    /*Insert at beginning*/
    Node* newNode = new Node(5);
    newNode->next = head;
    head = newNode;
    
    /*insert at end*/
    if (head == nullptr) {
    head = tail = newNode;
    } else {
    tail->next = newNode;
    tail = newNode;
    }

    /*Search*/
    int key = 20;
    while (temp != nullptr) {
    if (temp->data == key)
        return true;
    temp = temp->next;
    }

    /*delete first node*/
    Node* temp = head;
    head = head->next;
    delete temp;
    
    /*Reverse ll*/
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr) {
    Node* next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
    }
    head = prev;
    return false;

    return 0;
}