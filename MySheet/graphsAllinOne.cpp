#include <bits/stdc++.h>
using namespace std;

//Graph BFS - time: O(V+E), space: O(V)
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

//DFS - time: O(V+E), space: O(V)
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

//Connected Componenst : Run bfs/dfs from every unvisited nodes
int components = 0;
for (int i = 0; i < n; i++) {
    if (!visited[i]) {
        components++;
        dfs(i, adj, visited);
    }
}