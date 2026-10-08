#include <bits/stdc++.h>
using namespace std;

struct node {
    node*children[26];
    node*isEnd;
    node (){
    isEnd = false;
    for (int i = 0; i < 26; i++){
        children [i] = nullptr;
    }
}
};

class Solution {
    public :
    node* root ;
    void insert (string word){
    node*currr = root ;
    int indx = ch - 'a';
    if (curr -> children[indx]== nullptr){
        curr-> children [indx] = newNode();
        }
        curr = curr -> children [index];
    }
    isEnd = true;
}
};










































































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