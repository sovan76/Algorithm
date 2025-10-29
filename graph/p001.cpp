// author: sovan chakma

#include <bits/stdc++.h>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;   // dynamic 2D array (vector of vectors)

public:
    Graph(int v) {
        V = v;
        adj.resize(V + 1);  // allow 1-based indexing
    }

    void addedge(int i, int j, bool undir = true) {
        if (i < 1 || i > V || j < 1 || j > V) {
            cerr << "Invalid edge: " << i << " " << j << endl;
            return;
        }
        adj[i].push_back(j);
        if (undir) {
            adj[j].push_back(i);
        }
    }

    void printAdjlist() {
        for (int i = 1; i <= V; i++) {
            cout << i << " ---> ";
            for (int node : adj[i]) {
                cout << node << " ";
            }
            cout << endl;
        }
    }

    void bfs(int source) {
        vector<bool> visited(V + 1, false);
        queue<int> qu;

        qu.push(source);
        visited[source] = true;

        while (!qu.empty()) {
            int f = qu.front();
            cout << f << " ";
            qu.pop();

            for (auto x : adj[f]) {
                if (!visited[x]) {
                    qu.push(x);
                    visited[x] = true;
                }
            }
        }
    }
};

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n, m;  // number of vertices, number of edges
    cin >> n >> m;

    Graph G(n);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        G.addedge(u, v);
    }

    G.printAdjlist();
    cout << "\nBFS starting from node 1:";
    G.bfs(1);

    return 0;
}
