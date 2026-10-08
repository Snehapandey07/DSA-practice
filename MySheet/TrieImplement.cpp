/*Date : 10.08.2026*/

#include <bits/stdc++.h>
using namespace std;
class Trie {
    struct Node {
        Node* children[26];
        bool isEnd;
        Node() {
            isEnd = false;
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };
    Node* root;
public:
    Trie() {
        root = new Node();
    }
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
    bool search(string word) {
        Node* curr = root;
        for (char ch : word) {
            int index = ch - 'a';
            if (curr->children[index] == nullptr) {
                return false;
            }
            curr = curr->children[index];
        }
        return curr->isEnd;
    }
    bool startsWith(string prefix) {
        Node* curr = root;
        for (char ch : prefix) {
            int index = ch - 'a';
            if (curr->children[index] == nullptr) {
                return false;
            }
            curr = curr->children[index];
        }
        return true;
    }
};
int main() {
    Trie trie;
    trie.insert("apple");
    trie.insert("app");
    trie.insert("bat");

    cout << trie.search("apple") << endl;
    cout << trie.search("app") << endl;
    cout << trie.search("cat") << endl;

    cout << trie.startsWith("app") << endl;
    cout << trie.startsWith("bat") << endl;
    cout << trie.startsWith("cat") << endl;
    return 0;
}

/*
                 root
                /    \
               a      b
               |      |
               p      a
               |     / \
               p    t   l
              / \       |
             l   END    l
             |          |
             e         END
             |
            END
*/