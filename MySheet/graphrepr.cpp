/*#include <bits/stdc++.h>
using namespace std;
int main() {
    int V = 4;  
    vector<pair<int, int>> edges = {
        {0, 1}, {0, 2}, {1, 2}, {2, 3}
    };
    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1; 
    }
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> adjList(V);
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjList[u].push_back(v);
        adjList[v].push_back(u);  
    }
    cout << "\nAdjacency List:\n";
    for (int i = 0; i < V; i++) {
        cout << i << " -> ";
        for (int neighbor : adjList[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    return 0;
}*/

/*Date: 26.09.2026
#include <bits/stdc++.h>
using namespace std;
int main(){
    int v = 4;
    vector<pair<int, int>> edges = {{0, 1}, {0, 2}, {1, 2}, {2, 3}};
    vector <vector<int>>adjmat(v, vector<int>(v,0));
    for (auto edge : edges){
        int u = edge.first;
        int v = edge.second;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }
    cout <<"adjacency matrix:"<<endl;
    for (int i = 0; i<v; i++){
        for(int j = 0; j<v; j++){
            cout<<adjmat[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
} */
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int V = 4;
    vector<pair<int, int>> edges = {
        {0,1}, {1,0}, {1,2}, {2,3}
    };
    vector<vector<int>> adjlist(V);
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjlist[u].push_back(v);
    }
    cout << "Adjacency List:" << endl;
    for (int i = 0; i < V; i++) {
        cout << i << " : ";
        for (int neighbor : adjlist[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    return 0;
} */

/* Date: 27.09.2026 */
/* little changes : added vertices values */
#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> V = {10, 20, 50, 100};
    vector<pair<int, int>> edges = {{0, 1},{0, 2},{1, 2},{2, 3}};
    int n = V.size();
    vector<vector<int>> adjmat(n, vector<int>(n, 0));
    for (auto edge : edges) {
        int u = edge.first;
        int v = edge.second;
        adjmat[u][v] = 1;
        adjmat[v][u] = 1;
    }
    cout << "Vertices: ";
    for (int value : V) {
        cout << value << " ";
    }
    cout << endl;
    cout << "Edges: ";
    for (auto edge : edges) {
        cout << "(" << V[edge.first] << ", " << V[edge.second] << ") ";
    }
    cout << endl;
    cout << "\nAdjacency Matrix:\n";
    cout << "    ";
    for (int value : V) {
        cout << value << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << V[i] << "   ";
        for (int j = 0; j < n; j++) {
            cout << adjmat[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}