/* Date : 20.06.2026 */
#include <bits/stdc++.h>
using namespace std;

void vectors(vector<int>& v) {
    v.push_back(45);
    v.pop_back();
    cout << v[1];
    cout << v.size();
    v.clear();
    for(int x : v) {
        cout << x << " ";
    }
}

void strings (string s ){
cout << s[0];      
cout << s.length(); 
s.push_back('!');
s.pop_back();
for(char c : s) {
    cout << c << " ";
}
}

void pairs( ){
pair<int, string> p
p.first = 10;
p.second = "Sneha";

cout << p.first;
cout << p.second;

pair<int, int> p1 = {10, 20};
cout << p1.first << " " << p1.second;
vector<pair<int,int>> v;
v.push_back({1, 100});
v.push_back({2, 200});
for(auto p : v) {
    cout << p.first << " " << p.second << endl;
}
}
void stacks() {
    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    st.pop();

    cout << st.top();
    cout << st.empty();
    cout << st.size();
}

void queues(){
    queue<int> q;
q.push(10);
q.push(20);
q.push(30);
q.push(40);    

q.pop();        
q.front();      
q.back();        
q.empty();
cout<< q.size();
}
int main() {
    vector<int> v = {23,45,6,5687,4,342,546};
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>()); // descending ord
    vectors(v);

     string s = "hello";
     strings(s);
     pairs();
     stacks();
     queues();
    return 0;
}