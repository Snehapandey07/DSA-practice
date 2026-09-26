/* bfs = tc: O(V+E) , SC: O(V)*/
/*#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node(int x) {
        val = x;
    }
};
class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (node == nullptr) return nullptr;
        unordered_map<Node*, Node*> mp;
        queue<Node*> q;
        mp[node] = new Node(node->val);
        q.push(node);
        while (!q.empty()) {
            Node* curr = q.front();
            q.pop();
            for (Node* neighbor : curr->neighbors) {
                if (mp.find(neighbor) == mp.end()) {
                    mp[neighbor] = new Node(neighbor->val);
                    q.push(neighbor);
                }
                mp[curr]->neighbors.push_back(mp[neighbor]);
            }
        }
        return mp[node];
    }
};
int main() {
    Solution sol;
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    n1->neighbors = {n2, n4};
    n2->neighbors = {n1, n3};
    n3->neighbors = {n2, n4};
    n4->neighbors = {n1, n3};
    Node* clone = sol.cloneGraph(n1);
    cout << "Cloned Graph:" << endl;
    queue<Node*> q;
    unordered_set<Node*> visited;
    q.push(clone);
    visited.insert(clone);
    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->val << " -> ";
        for (Node* neighbor : curr->neighbors) {
            cout << neighbor->val << " ";
            if (!visited.count(neighbor)) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
        cout << endl;
    }
    return 0;
}*/

/* Date: 26.09.2026 */
/* Using DFS: TC = O(V+E), SC = O(V) */

#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node(int x) {
        val = x;
    }
};
class Solution {
public:
    unordered_map<Node*, Node*> mp;
    Node* cloneGraph(Node* node) {
        if (node == nullptr)
            return nullptr;
        if (mp.find(node) != mp.end())
            return mp[node];
            
        mp[node] = new Node(node->val);
        for (Node* neighbor : node->neighbors) {
            mp[node]->neighbors.push_back(cloneGraph(neighbor));
        }
        return mp[node];
    }
};

int main() {
  Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    n1->neighbors = {n2, n4};
    n2->neighbors = {n1, n3};
    n3->neighbors = {n2, n4};
    n4->neighbors = {n1, n3};

    Solution s;
    Node* clone = s.cloneGraph(n1);
    cout << "Cloned Graph:" << endl;
    queue<Node*> q;
    unordered_set<Node*> visited;
    q.push(clone);
    visited.insert(clone);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        cout << curr->val << " -> ";
        for (Node* neighbor : curr->neighbors) {
            cout << neighbor->val << " ";
            if (visited.find(neighbor) == visited.end()) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
        cout << endl;
    }
    return 0;
}