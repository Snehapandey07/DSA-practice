/* Display linked list */

#include <bits/stdc++.h>
using namespace std ;

#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
};
int main(){
    Node* y = new Node;
    y->data = 2;
    y->next = nullptr;

    cout << y->data;
}