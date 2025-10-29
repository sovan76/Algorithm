#include <bits/stdc++.h>
using namespace std;

string trim(string str) {
    size_t first = str.find_first_not_of(' ');
    size_t last = str.find_last_not_of(' ');
    if (first == string::npos || last == string::npos)
        return "";
    return str.substr(first, last - first + 1);
}

vector<string> splitstring(string str) {
    vector<string> tokens;
    istringstream iss(str);
    string token;
    while (iss >> token) {
        tokens.push_back(token);
    }
    return tokens;
}

void dfs(int u, int parent, vector<vector<int>>& tree, vector<int>& subtree_size, vector<vector<int>>& subtree_nodes, vector<int>& usefulness) {
    subtree_size[u] = 1;
    subtree_nodes[u].push_back(u);
    for (int v : tree[u]) {
        if (v == parent) continue;
        dfs(v, u, tree, subtree_size, subtree_nodes, usefulness);
        subtree_size[u] += subtree_size[v];
        for (int node : subtree_nodes[v]) {
            subtree_nodes[u].push_back(node);
        }
    }
    for (int v : subtree_nodes[u]) {
        if (u % v == 0) {
            usefulness[u]++;
        }
    }
}

int get_ans(int n, int m, int cols, vector<vector<int>> edges) {

    vector<vector<int>> tree(n + 1);
    for (const auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        tree[u].push_back(v);
        tree[v].push_back(u);
    }


    vector<vector<int>> subtree_nodes(n + 1);
    vector<int> subtree_size(n + 1, 0);
    vector<int> usefulness(n + 1, 0);

    dfs(1, -1, tree, subtree_size, subtree_nodes, usefulness);


    long long total_usefulness = 0;
    for (int u = 1; u <= n; ++u) {
        total_usefulness += usefulness[u];
    }

    return total_usefulness;
}

int main() {
     freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    int n, m, cols;
    cin >> n >> m >> cols;
    vector<vector<int>> edges(m, vector<int>(cols));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> edges[i][j];
        }
    }
    cout << get_ans(n, m, cols, edges) << endl;
    return 0;
}
