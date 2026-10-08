/*Date: 08.10.2026*/
#include <bits/stdc++.h>
using namespace std;
class trie {
    struct node {
        node* children[26];
        bool isEnd;
        node() {
            isEnd = false;
            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };
    node* root;
    // DFS to print all words
    void printWords(node* curr, string word) {
        if (curr->isEnd) {
            cout << word << endl;
        }
        for (int i = 0; i < 26; i++) {
           if (curr->children[i] != nullptr) {
                word.push_back('a' + i);
                printWords(curr->children[i], word);
                word.pop_back();
            }
        }
    }

public:

    trie() {
        root = new node();
    }
    void insert(string word) {
        node* curr = root;
        for (char ch : word) {
            int indx = ch - 'a';
            if (curr->children[indx] == nullptr) {
                curr->children[indx] = new node();
            }
            curr = curr->children[indx];
        }
        curr->isEnd = true;
    }
    void printWords() {
        string word = "";
        printWords(root, word);
    }
};

int main() {
    trie t;
    t.insert("apple");
    t.insert("app");
    t.insert("this");
    t.insert("time");
    t.insert("enjoy");
    t.insert("your");
    t.insert("work");
    cout << "Words in Trie:" << endl;
    t.printWords();
    return 0;
}