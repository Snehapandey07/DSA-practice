#include <bits/stdc++.h>
using namespace std;

//1. Graph BFS - time: O(V+E), space: O(V)
queue<int> q;
vector<bool> visited(n, false);
q.push(0);
visited[0] = true;
while (!q.empty()) {
    int node = q.front();
    q.pop();
    cout << node << " ";
    for (int next : adj[node]) {
        if (!visited[next]) {
            visited[next] = true;
            q.push(next);
        }
    }
}

//2. DFS - time: O(V+E), space: O(V)
void dfs(int node, vector<vector<int>>& adj,vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";
    for (int next : adj[node]) {
        if (!visited[next]) {
            dfs(next, adj, visited);
        }
    }
}
/*call dfs*/:  dfs(0, adj, visited);

//3. Connected Componenst : Run bfs/dfs from every unvisited nodes
int components = 0;
for (int i = 0; i < n; i++) {
    if (!visited[i]) {
        components++;
        dfs(i, adj, visited);
    }
}

/*4. Topologucal sortingn : Kahn's algo , BFS*/
vector<int> topoSort(int V, vector<vector<int>>& adj) {
    vector<int> indegree(V, 0);
    // 1. Calculate indegree
    for (int u = 0; u < V; u++) {
        for (int v : adj[u]) {
            indegree[v]++;
        }
    }
    // 2. Put all indegree-0 nodes in queue
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }
    vector<int> topo;
    // 3. Process queue
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        topo.push_back(u);

        // 4. Remove u's outgoing edges
        for (int v : adj[u]) {
            indegree[v]--;
            // 5. If indegree becomes 0
            if (indegree[v] == 0)
                q.push(v);
        }
    }
    return topo;
}
//kahn's cycle detection 
if (topo.size() == V)
    // no cycle
else
    // cycle exists


/* 5. Topological sort - DFS */
void dfs(int u, vector<vector<int>>& adj,
         vector<int>& vis, stack<int>& st) {
    vis[u] = 1;
    for (int v : adj[u]) {
        if (!vis[v]) {
            dfs(v, adj, vis, st);
        }
    }
    st.push(u);
}
vector<int> topoSort(int V, vector<vector<int>>& adj) {
    vector<int> vis(V, 0);
    stack<int> st;
    for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            dfs(i, adj, vis, st);
        }
    }
    vector<int> topo;
    while (!st.empty()) {
        topo.push_back(st.top());
        st.pop();
    }
    return topo;
}