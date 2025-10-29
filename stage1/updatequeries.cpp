// author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> indices(m);
        for (int i = 0; i < m; i++) {
            cin >> indices[i];
        }

        string c;
        cin >> c;

        sort(indices.begin(), indices.end());
        sort(c.begin(), c.end());

        indices.erase(unique(indices.begin(),indices.end()),indices.end());
        for (int i = 0; i < indices.size(); i++) {
            s[indices[i] - 1] = c[i];
        }

        cout << s << endl;
    }

    return 0;
}
