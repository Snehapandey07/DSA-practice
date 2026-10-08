#include <bits/stdc++.h>
using namespace std;

//Bassic Trie node

struct Node {
    Node* children[26];
    bool isEnd;
    Node() {
        isEnd = false;
        for (int i = 0; i < 26; i++)
            children[i] = nullptr;
    }
};
Node* root = new Node();

/*Meaning : children[26] → next character
isEnd        → complete word ends here
root         → starting point */


//Insert

void insert(string word) {
    Node* curr = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (curr->children[index] == nullptr) {
            curr->children[index] = new Node();
        }
        curr = curr->children[index];
    }
    curr->isEnd = true;
}

//Search a complete word 

bool search(string word) {
    Node* curr = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (curr->children[index] == nullptr)
            return false;
        curr = curr->children[index];
    }
    return curr->isEnd;
}

//Search for a prefix 

bool startsWith(string prefix) {
    Node* curr = root;
    for (char ch : prefix) {
        int index = ch - 'a';
        if (curr->children[index] == nullptr)
            return false;
        curr = curr->children[index];
    }
    return true;
}


/*Find a Trie Node for a Prefix
Instead of returning true/false, return the node reached by a prefix.*/

Node* getNode(string prefix) {
    Node* curr = root;
    for (char ch : prefix) {
        int index = ch - 'a';
        if (curr->children[index] == nullptr)
            return nullptr;
        curr = curr->children[index];
    }
    return curr;
}

//Count words prefixes - during insertion

void insert(string word) {
    Node* curr = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (curr->children[index] == nullptr)
            curr->children[index] = new Node();
        curr = curr->children[index];
        curr->prefixCount++;
    }
    curr->wordCount++;
}

/*Delete a word*/
bool erase(string word) {
    Node* curr = root;
    for (char ch : word) {
        int index = ch - 'a';
        if (curr->children[index] == nullptr)
            return false;
        curr = curr->children[index];
    }
    if (!curr->isEnd)
        return false;
    curr->isEnd = false;
    return true;
}

/*Trie + DFs : used for harder problems*/

void dfs(Node* curr, string& current) {
    if (curr->isEnd) {
        cout << current << endl;
    }
    for (int i = 0; i < 26; i++) {
        if (curr->children[i] != nullptr) {
            current.push_back('a' + i);
            dfs(curr->children[i], current);
            current.pop_back();
        }
    }
}