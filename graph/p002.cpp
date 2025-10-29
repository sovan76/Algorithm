#include <bits/stdc++.h>
using namespace std;

struct DSU {
    vector<int> parent, size;
    int components; // counter for number of components

    DSU(int n) {
        parent.resize(n+1);
        size.assign(n+1, 1);
        components = n; // initially, each node is its own component
        for(int i = 1; i <= n; i++){
            parent[i] = i;
            cout<<parent[i];
        }
        cout<<endl;
        for(auto x: size){
        cout<<x<< " ";
      }
    }
    

    int find(int x) {
        if(parent[x] == x) return x;
        return parent[x] = find(parent[x]); // path compression
    }

    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if(a != b) {
            // merge smaller into larger
            if(size[a] < size[b]) swap(a, b);
            parent[b] = a;
            size[a] += size[b];
            components--; // successful merge reduces total components
        }
    }
};

int main() {

     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, m;
    cin >> n >> m;  // n = vertices, m = edges
    DSU dsu(n);

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        dsu.unite(u, v);
    }

    cout << dsu.components << "\n"; // number of provinces

    // works for Forests (acyclic graphs)
    // if(n==m) cout<<"1";
    //    else cout<< abs(n-m);
    return 0;
}
