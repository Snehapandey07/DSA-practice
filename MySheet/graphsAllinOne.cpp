#include <bits/stdc++.h>
using namespace std;
class Graph {
public:
    int V;
    vector<vector<int>> adj;
    vector<vector<int>> matrix;
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
        matrix.resize(V, vector<int>(V, 0));
    }
    void addEdge(int u, int v, int weight = 1) {
        adj[u].push_back(v);
        adj[v].push_back(u);
        matrix[u][v] = weight;
        matrix[v][u] = weight;
        cout << "Edge added: " << u << " - " << v << endl;
    }
    void removeEdge(int u, int v) {
        auto& a = adj[u];
        a.erase(remove(a.begin(), a.end(), v), a.end());
        auto& b = adj[v];
        b.erase(remove(b.begin(), b.end(), u), b.end());
        matrix[u][v] = 0;
        matrix[v][u] = 0;
        cout << "Edge removed: " << u << " - " << v << endl;
    }
    void checkEdge(int u, int v) {
        if (matrix[u][v] != 0)
            cout << "Edge exists between "
                 << u << " and " << v << endl;
        else
            cout << "No edge exists between "
                 << u << " and " << v << endl;
    }
    void displayList() {
        cout << "\nAdjacency List:\n";
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (int node : adj[i])
                cout << node << " ";
            cout << endl;
        }
    }
    void displayMatrix() {
        cout << "\nAdjacency Matrix:\n";
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++)
                cout << matrix[i][j] << " ";
            cout << endl;
        }
    }
    void degree(int u) {
        cout << "Degree of vertex "
             << u << " = "
             << adj[u].size() << endl;
    }
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
    void connectedComponents() {
        vector<bool> visited(V, false);
        int count = 0;
        cout << "\nConnected Components:\n";
        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                count++;
                cout << "Component "
                     << count << ": ";
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
        cout << "Total Components = "
             << count << endl;
    }
    bool cycleDFS(int node,
                  int parent,
                  vector<bool>& visited) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (cycleDFS(neighbor,
                             node,
                             visited))
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
                    dist[neighbor] =
                        dist[node] + 1;
                    q.push(neighbor);
                }
            }
        }
        cout << "\nShortest Path (BFS) from "
             << start << " to " << target
             << " = "
             << dist[target] << endl;
    }
    void dijkstra(int start) {
        vector<int> dist(V, INT_MAX);
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;
        dist[start] = 0;
        pq.push(make_pair(0, start));
        while (!pq.empty()) {
            int d = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if (d != dist[node])
                continue;
            for (int neighbor : adj[node]) {
                int weight =
                    matrix[node][neighbor];
                if (dist[node] != INT_MAX &&
                    dist[node] + weight <
                    dist[neighbor]) {
                    dist[neighbor] =
                        dist[node] + weight;
                    pq.push(
                        make_pair(
                            dist[neighbor],
                            neighbor
                        )
                    );
                }
            }
        }
        cout << "\nDijkstra Shortest Distances:\n";
        for (int i = 0; i < V; i++) {
            cout << "Vertex "
                 << i << " : ";
            if (dist[i] == INT_MAX)
                cout << "INF";
            else
                cout << dist[i];
            cout << endl;
        }
    }
    void primMST() {
        vector<bool> visited(V, false);
        priority_queue<
            pair<int, int>,
            vector<pair<int, int>>,
            greater<pair<int, int>>
        > pq;
        pq.push(make_pair(0, 0));
        int totalWeight = 0;
        int visitedCount = 0;
        cout << "\nPrim's MST Edges:\n";
        while (!pq.empty()) {
            int weight = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            if (visited[node])
                continue;
            visited[node] = true;
            visitedCount++;
            totalWeight += weight;
            if (weight != 0) {
                cout << "Vertex "
                     << node
                     << " added with weight "
                     << weight << endl;
            }
            for (int neighbor : adj[node]) {
                if (!visited[neighbor]) {
                    pq.push(
                        make_pair(
                            matrix[node][neighbor],
                            neighbor
                        )
                    );
                }
            }
        }
        if (visitedCount != V) {
            cout << "Graph is disconnected. "
                 << "MST does not exist.\n";
            return;
        }
        cout << "Total MST Weight = "
             << totalWeight << endl;
    }
};
class DSU {
public:
    vector<int> parent;
    vector<int> rankValue;
    DSU(int n) {

        parent.resize(n);
        rankValue.resize(n, 0);
   iota(parent.begin(),
             parent.end(),
             0);
    }
    int find(int x) {
        if (parent[x] == x)
            return x;
        return parent[x] =
            find(parent[x]);
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
void kruskalMST(
    int V,
    vector<tuple<int, int, int>> edges
) {
    sort(edges.begin(), edges.end());
    DSU dsu(V);
    int totalWeight = 0;
    int edgeCount = 0;
    cout << "\nKruskal's MST Edges:\n";
    for (auto edge : edges) {
        int weight = get<0>(edge);
        int u = get<1>(edge);
        int v = get<2>(edge);
        if (dsu.unite(u, v)) {
            cout << u << " - "
                 << v << " : "
                << weight << endl;
            totalWeight += weight;
            edgeCount++;
        }
    }
    if (edgeCount != V - 1) {
        cout << "Graph is disconnected. "
             << "MST does not exist.\n";
        return;
    }
    cout << "Total MST Weight = "
         << totalWeight << endl;
}
void topologicalSort(
    int V,
    vector<vector<int>>& adj
) {
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
    if ((int)result.size() != V) {
        cout << "Graph contains a cycle. "
             << "Topological sort is not possible.\n";
        return;
    }
    cout << "\nTopological Sort: ";
    for (int node : result)
        cout << node << " ";
    cout << endl;
}
int main() {
    Graph g(5);
    cout << "\n--- Adding Edges ---\n";
    g.addEdge(0, 1, 2);
    g.addEdge(0, 2, 4);
    g.addEdge(1, 2, 1);
    g.addEdge(1, 3, 7);
    g.addEdge(2, 4, 3);
    g.addEdge(3, 4, 2);
    g.displayList();
    g.displayMatrix();
    cout << "\n--- Basic Operations ---\n";
    g.checkEdge(0, 1);
    g.degree(1);
    cout << "\n--- Traversals ---\n";
    g.BFS(0);
    g.DFS(0);
    cout << "\n--- Graph Analysis ---\n";
    g.connectedComponents();
    g.detectCycle();
    // SHORTEST PATHS
    cout << "\n--- Shortest Paths ---\n";
    g.shortestPathBFS(0, 4);
    g.dijkstra(0);
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
    cout << "\n--- Topological Sorting ---\n";
    // Directed Acyclic Graph
    vector<vector<int>> dag(4);
    dag[0].push_back(1);
    dag[0].push_back(2);
    dag[1].push_back(3);
    dag[2].push_back(3);
    topologicalSort(4, dag);
    cout << "\n--- Removing Edge ---\n";
    g.removeEdge(0, 1);
    g.displayList();
    return 0;
}