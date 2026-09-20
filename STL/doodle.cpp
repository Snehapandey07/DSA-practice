/* Date : 20.06.2026 */

#include <bits/stdc++.h>
using namespace std;

void vectors(vector<int>& v) {
    v.push_back(45);
    v.pop_back();
    cout << v[1] << endl;
    cout << v.size() << endl;
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;
    v.clear();
}

void strings(string s) {

    cout << s[0] << endl;
    cout << s.length() << endl;
    s.push_back('!');
    s.pop_back();
    for (char c : s) {
        cout << c << " ";
    }
    cout << endl;
}

void pairs() {

    pair<int, string> p;
    p.first = 10;
    p.second = "Sneha";
    cout << p.first << " " << p.second << endl;
    pair<int, int> p1 = {10, 20};
    cout << p1.first << " " << p1.second << endl;
    vector<pair<int, int>> v;
    v.push_back({1, 100});
    v.push_back({2, 200});
    for (auto p : v) {
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
    cout << st.top() << endl;
    cout << st.empty() << endl;
    cout << st.size() << endl;
}

void queues() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.empty() << endl;
    cout << q.size() << endl;
}

void priorityqueue() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(50);
    pq.push(20);
    cout << pq.top() << endl;
    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(10);
    pq1.push(50);
    pq1.push(20);
    cout << pq1.top() << endl;
}

void sets() {
    set<int> s;
    s.insert(30);
    s.insert(10);
    s.insert(20);
    s.insert(10);
    s.insert(5);
    s.erase(20);
    cout << s.count(10) << endl;
    cout << s.size() << endl;
    if (s.find(10) != s.end()) {
        cout << "Found" << endl;
    }
}

void unset() {
    unordered_set<int> s;
    s.insert(30);
    s.insert(10);
    s.insert(20);
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;
}

void maps() {
    map<string, int> mp;
    mp["Sneha"] = 95;
    mp["dodo"] = 90;
    mp["tribh"] = 85;
    cout << mp["Sneha"] << endl;
    vector<int> v(5, 100);
    unordered_map<int, int> freq;
    for (int x : v) {
        freq[x]++;
    }
    cout << freq[100] << endl;
}

void dqs() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(9);
    dq.pop_back();
    dq.pop_front();
    cout << dq.back() << endl;
    cout << dq.front() << endl;
    cout << dq.size() << endl;
}

void ms() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.insert(4);
    ms.insert(9);
    ms.insert(5);
    ms.insert(6);
    ms.erase(1);
    int cnt = ms.count(1);
    cout << cnt << endl;
    auto it = ms.find(12);
    if (it != ms.end()) {
        ms.erase(it);
    }
}

void multimaps() {
    multimap<int, int> mp;
    mp.insert({1, 100});
    mp.insert({1, 200});
    mp.insert({2, 300});

    // Duplicate keys are allowed
}

void unorderedmaps() {
    unordered_map<int, int> ump;
    ump[1] = 100;
    ump[2] = 200;
}

int main() {
    vector<int> v = {23, 45, 6, 5687, 4, 342, 546};
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(), greater<int>()); // descending
    reverse(v.begin(), v.end());
    vectors(v);

    vector<int> v2 = {10, 20, 30, 40, 50};
    v2.erase(v2.begin() + 1);
    v2.erase(v2.begin() + 2, v2.begin() + 4);

    string s = "hello";
    int a = 10;
    int b = 20;
    cout << max(a, b) << endl;
    cout << min(a, b) << endl;
    swap(a, b);

    vector<int> v1 = {10, 20, 30, 40};
    cout << count(v1.begin(), v1.end(), 20) << endl;
    auto it = find(v1.begin(), v1.end(), 30);

    if (it != v1.end()) {
        cout << "Found" << endl;
    }

    vector<int> v5 = {1, 2, 2, 2, 4, 5};
    auto t = lower_bound(v5.begin(), v5.end(), 2);
    vector<int>::iterator it2;
    int index = lower_bound(v5.begin(), v5.end(), 2) - v5.begin();
    cout << index << endl;
    vector<int> v7 = {10, 20, 30};

    for (auto it = v7.begin(); it != v7.end(); it++) {
        cout << *it << " ";
    }

    cout << endl;
    strings(s);
    pairs();
    stacks();
    queues();
    priorityqueue();
    sets();
    unset();
    maps();
    dqs();
    ms();
    multimaps();
    unorderedmaps();

    return 0;
}