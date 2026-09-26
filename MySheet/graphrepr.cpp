// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     int V = 4;  
//     vector<pair<int, int>> edges = {
//         {0, 1}, {0, 2}, {1, 2}, {2, 3}
//     };
//     vector<vector<int>> adjMatrix(V, vector<int>(V, 0));
//     for (auto edge : edges) {
//         int u = edge.first;
//         int v = edge.second;
//         adjMatrix[u][v] = 1;
//         adjMatrix[v][u] = 1; 
//     }
//     cout << "Adjacency Matrix:\n";
//     for (int i = 0; i < V; i++) {
//         for (int j = 0; j < V; j++) {
//             cout << adjMatrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     vector<vector<int>> adjList(V);
//     for (auto edge : edges) {
//         int u = edge.first;
//         int v = edge.second;
//         adjList[u].push_back(v);
//         adjList[v].push_back(u);  // Undirected graph
//     }
//     cout << "\nAdjacency List:\n";
//     for (int i = 0; i < V; i++) {
//         cout << i << " -> ";
//         for (int neighbor : adjList[i]) {
//             cout << neighbor << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

/*Date: 26.09.2026*/
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
}