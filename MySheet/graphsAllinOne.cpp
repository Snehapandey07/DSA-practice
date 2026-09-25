#include <bits/stdc++.h>
using namespace std;
// GRAPH REPRESENTATION
class Graph {
public:
    int V;
    vector<vector<int>> adj;
    vector<vector<int>> matrix;
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
        matrix.resize(V, vector<int>(V, 0));
    // 1. ADD EDGE
    void addEdge(int u, int v, int weight = 1) {
        adj[u].push_back(v);
        adj[v].push_back(u);
        matrix[u][v] = weight;
        matrix[v][u] = weight;
        cout << "Edge added: " << u << " - " << v << endl;
    }
    // 2. REMOVE EDGE
    void removeEdge(int u, int v) {
        auto &a = adj[u];
        a.erase(remove(a.begin(), a.end(), v), a.end());
        matrix[u][v] = 0;
        matrix[v][u] = 0;
        cout << "Edge removed: " << u << " - " << v << endl;
    }
    // 3. CHECK EDGE
    void checkEdge(int u, int v) {
        if (matrix[u][v] != 0)
            cout << "Edge exists between " << u << " and " << v << endl;
        else
            cout << "No edge exists between " << u << " and " << v << endl;
    }
    // 4. DISPLAY ADJACENCY LIST
    void displayList() {
        cout << "\nAdjacency List:\n";
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (int node : adj[i])
                cout << node << " ";
            cout << endl;
        }
    }
    // 5. DISPLAY ADJACENCY MATRIX
    void displayMatrix() {
        cout << "\nAdjacency Matrix:\n";
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }
    // 6. DEGREE OF VERTEX
    void degree(int u) {
        cout << "Degree of vertex " << u << " = "
             << adj[u].size() << endl;
    }
    // 7. BFS TRAVERSAL
    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);
        cout << "\nBFS Traversal: ";
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }
        cout << endl;
    }
    // 8. DFS TRAVERSAL
    void DFSUtil(int node, vector<bool>& visited) {
        visited[node] = true;
        cout << node << " ";
        for (int neighbor : adj[node]) {
            if (!visited[neighbor])
                DFSUtil(neighbor, visited);
        }
    }
    void DFS(int start) {
        vector<bool> visited(V, false);
        cout << "\nDFS Traversal: ";
        DFSUtil(start, visited);
        cout << endl;
    }
    // 9. CONNECTED COMPONENTS
    void connectedComponents() {
        vector<bool> visited(V, false);
        int count = 0;
        cout << "\nConnected Components:\n";
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                count++;
                cout << "Component " << count << ": ";
                queue<int> q;
                q.push(i);
                visited[i] = true;
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    cout << node << " ";
                    for (int neighbor : adj[node]) {
                        if (!visited[neighbor]) {
                            visited[neighbor] = true;
                            q.push(neighbor);
                        }
                    }
                }
                cout << endl;
            }
        }
        cout << "Total Components = " << count << endl;
    }
    // 10. CYCLE DETECTION (UNDIRECTED GRAPH)
    bool cycleDFS(int node, int parent, vector<bool>& visited) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (cycleDFS(neighbor, node, visited))
                    return true;
            }
            else if (neighbor != parent) {
                return true;
            }
        }
        return false;
    }
    void detectCycle() {
        vector<bool> visited(V, false);
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (cycleDFS(i, -1, visited)) {
                    cout << "\nCycle Detected!\n";
                    return;
                }
            }
        }

        cout << "\nNo Cycle Detected.\n";
    }
    // 11. SHORTEST PATH USING BFS
    void shortestPathBFS(int start, int target) {
        vector<int> dist(V, -1);
        queue<int> q;
        dist[start] = 0;
        q.push(start);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            for (int neighbor : adj[node]) {
                if (dist[neighbor] == -1) {
                    dist[neighbor] = dist[node] + 1;
                    q.push(neighbor);
                }
            }
        }
        cout << "\nShortest Path (BFS) from " << start
             << " to " << target << " = "
             << dist[target] << endl;
    }
    // 12. DIJKSTRA'S ALGORITHM
    void dijkstra(int start) {
        vector<int> dist(V, INT_MAX);
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;
        dist[start] = 0;
        pq.push({0, start});
        while (!pq.empty()) {
            auto [d, node] = pq.top();
            pq.pop();
            if (d != dist[node])
                continue;
            for (int neighbor : adj[node]) {
                int weight = matrix[node][neighbor];
                if (dist[node] + weight < dist[neighbor]) {
                    dist[neighbor] = dist[node] + weight;
                    pq.push({dist[neighbor], neighbor});
                }
            }
        }
  cout << "\nDijkstra Shortest Distances:\n";
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << " : ";
            if (dist[i] == INT_MAX)
                cout << "INF";
            else
              cout << dist[i];
            cout << endl;
        }
    }
    // 13. PRIM'S MINIMUM SPANNIN tree
    void primMST() {
        vector<bool> visited(V, false);
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;
        pq.push({0, 0});
        int totalWeight = 0;
        cout << "\nPrim's MST Edges:\n";
        while (!pq.empty()) {
            auto [weight, node] = pq.top();
            pq.pop();
            if (visited[node])
                continue;
            visited[node] = true;
            totalWeight += weight;
            if (weight != 0)
                cout << "Vertex " << node
                     << " added with weight " << weight << endl;
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    pq.push({matrix[node][neighbor], neighbor});
                }
            }
        }

        cout << "Total MST Weight = " << totalWeight << endl;
    }
};
// 14. DISJOINT SET UNION (DSU)
class DSU {
public:
    vector<int> parent, rankValue;

    DSU(int n) {
        parent.resize(n);
        rankValue.resize(n, 0);

        iota(parent.begin(), parent.end(), 0);
    }
    int find(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }
    bool unite(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y)
            return false;
        if (rankValue[x] < rankValue[y])
            swap(x, y);
        parent[y] = x;
        if (rankValue[x] == rankValue[y])
            rankValue[x]++;
        return true;
    }
};
// 15. KRUSKAL'S MINIMUM SPANNING TREE
void kruskalMST(int V, vector<tuple<int, int, int>> edges) {
    sort(edges.begin(), edges.end());
    DSU dsu(V);
    int totalWeight = 0;
    cout << "\nKruskal's MST Edges:\n";
    for (auto [weight, u, v] : edges) {
        if (dsu.unite(u, v)) {
            cout << u << " - " << v
                 << " : " << weight << endl;

            totalWeight += weight;
        }
    }
    cout << "Total MST Weight = " << totalWeight << endl;
}
// 16. TOPOLOGICAL SORTING
void topologicalSort(int V, vector<vector<int>>& adj) {
    vector<int> indegree(V, 0);
    for (int u = 0; u < V; u++) {
        for (int v : adj[u])
            indegree[v]++;
    }
    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (indegree[i] == 0)
            q.push(i);
    }
    vector<int> result;
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        result.push_back(node);
        for (int neighbor : adj[node]) {
            indegree[neighbor]--;
            if (indegree[neighbor] == 0)
                q.push(neighbor);
        }
    }
    if (result.size() != V) {
        cout << "Graph contains a cycle. Topological sort is not possible.\n";
        return;
    }
    cout << "\nTopological Sort: ";
    for (int node : result)
        cout << node << " ";
    cout << endl;
}
// MAIN FUNCTION
int main() {
    Graph g(5);
    cout << "\n--- Adding Edges ---\n";
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 4, 3);
    g.addEdge(3, 4, 2);
    // Display representations
    g.displayList();
    g.displayMatrix();
    // Basic operations
    cout << "\n--- Basic Operations ---\n";
    g.checkEdge(0, 1);
    g.degree(1);    // Traversals
    cout << "\n--- Traversals ---\n";
    g.BFS(0);
    g.DFS(0);
    // Components and cycle detection
    cout << "\n--- Graph Analysis ---\n";
    g.connectedComponents();
    g.detectCycle();
    // Shortest paths
    cout << "\n--- Shortest Paths ---\n";
    g.shortestPathBFS(0, 4);
    g.dijkstra(0);
    // Minimum spanning trees
    cout << "\n--- Minimum Spanning Trees ---\n";
    g.primMST();
    vector<tuple<int, int, int>> edges = {
        {2, 0, 1},
        {4, 0, 2},
        {1, 1, 2},
        {7, 1, 3},
        {3, 2, 4},
        {2, 3, 4}
    };
    kruskalMST(5, edges);
    // Topological sorting example
    cout << "\n--- Topological Sorting ---\n";
    vector<vector<int>> dag(4);
    dag[0].push_back(1);
    dag[0].push_back(2);
    dag[1].push_back(3);
    dag[2].push_back(3);
    topologicalSort(4, dag);
    // Remove edge
    cout << "\n--- Removing Edge ---\n";
    g.removeEdge(0, 1);
    g.displayList();
    cout << "\n========== PROGRAM COMPLETED ==========\n";
    return 0;
}