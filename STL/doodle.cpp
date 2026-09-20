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

void priorityqueue(){
    priority_queue<int> pq;
pq.push(10);
pq.push(50);
pq.push(20);
cout << pq.top();
priority_queue<int, vector<int>, greater<int>> pq1;
pq1.top();
}

void sets(){
    set<int> s;
s.insert(30);
s.insert(10);
s.insert(20);
s.insert(10);
s.insert(5);

s.erase(20);
s.find(10);
s.count(10);
s.size();
if(s.find(10) != s.end()) {
    cout << "Found";
}
}

void unset(){
    unordered_set<int> s;
s.insert(30);
s.insert(10);
s.insert(20);
}
void maps(){
map<string, int> mp;

mp["Sneha"] = 95;
mp["dodo"] = 90;
mp["trubh"] = 85;
cout << mp["Sneha"];

vector<int>v (5,100);
unordered_map<int, int> freq;
for(int x : v) {
    freq[x]++;  // freq counting
}
}

void dqs(){
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(9);

    dq.pop_back();
    dq.pop_front();

    cout<<dq.back();
    cout<<dq.front();
    cout<< dq.size();
}

void ms(){
    multiset<int>ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(9);
    ms.insert(5);
    ms.insert(6);
    ms.erase(1);
    int cnt = ms.count(1);
    cout << cnt;
    ms.erase(ms.find(1\2));
    ms.erase(ms.find(1), ms.find(1)+2);
}

void multimaps(){
    multimap<int,int>mp;
    //store duplicates key , sorted
}

void unorderedmaps()
{
    unordered_map<int,int>ump;
}
int main() {
    vector<int> v = {23,45,6,5687,4,342,546};
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>()); // descending ord
    reverse(v.begin(), v.end());
    vectors(v);
    v.erase(v.begin()+1);
    v.erase(v.begin()+2, v.begin()+4);
     string s = "hello";
     int a = 10;
     int b = 20;
     cout << max(a, b);  
     cout << min(a, b);  
     swap(a,b);

     vector<int> v1 = {10, 20, 30, 40};
     cout << count(v1.begin(), v1.end(), 2);
     auto it = find(v1.begin(), v1.end(), 30);
     if(it != v.end()) {
     cout << "Found";
}

    vector<int> v5 = {1, 2, 2, 2, 4, 5};
    auto it = lower_bound(v5.begin(), v5.end(), 2);
        // iterators
    vector<int>::iterator it;
    int index = lower_bound(v.begin(), v.end(), 2) - v.begin();
    cout << index;

    vector<int> v7 = {10, 20, 30};
for(auto it = v7.begin(); it != v7.end(); it++) {
    cout << *it << " ";
}

     strings(s);
     pairs();
     stacks();
     queues();
     priorityqueue();
     sets ();
     unset();
     dqs();
     ms();
     multimaps();
     unorderedmaps();
    return 0;
}