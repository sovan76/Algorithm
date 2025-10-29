#include <bits/stdc++.h>
using namespace std;

bool match(const vector<int>& pattern, int start) {
    int m = pattern.size();
    int curRow = 1, pos = 0, idx = 0;
    
    // Skip `start` elements in simulated array b
    while (pos + curRow <= start) {
        pos += curRow;
        curRow++;
    }
    
    int offset = start - pos;
    
    while (idx < m) {
        if (offset == curRow) {
            offset = 0;
            curRow++;
        }
        if (curRow > 1e5) return false; // prevent overstepping bounds
        if (pattern[idx] != offset + 1)
            return false;
        idx++;
        offset++;
    }
    
    return true;
}

int main() {

      freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(m);
        for (int i = 0; i < m; ++i)
            cin >> a[i];

        int totalLength = n * (n + 1) / 2;  // Total length of array b
        int count = 0;

        // Try every possible starting index in b up to totalLength - m
        for (int i = 0; i <= totalLength - m; ++i) {
            if (match(a, i))
                count++;
        }

        cout << count << '\n';
    }

    return 0;
}
