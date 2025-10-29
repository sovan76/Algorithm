#include <bits/stdc++.h>
using namespace std;

int orangesRotting(vector<vector<int>>& grid) {
    int n = grid.size(), m = grid[0].size();
    queue<pair<int,int>> q;
    int fresh = 0;

    // Step 1: collect initial rotten oranges and count fresh ones
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 2) {
                q.push({i, j});
            } else if (grid[i][j] == 1) {
                fresh++;
            }
        }
    }

    if (fresh == 0) return 0; // no fresh oranges initially

    int minutes = -1;
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    // Step 2: BFS level order
    while (!q.empty()) {
        int sz = q.size();
        minutes++;
        while (sz--) {
            auto [x, y] = q.front(); q.pop();

            for (int k = 0; k < 4; k++) {
                int nx = x + dx[k];
                int ny = y + dy[k];

                if (nx >= 0 && nx < n && ny >= 0 && ny < m && grid[nx][ny] == 1) {
                    grid[nx][ny] = 2; // rot it
                    fresh--;
                    q.push({nx, ny});
                }
            }
        }
    }

    return (fresh == 0) ? minutes : -1;
}

int main() {

      freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    int n, m;
    cout << "Enter grid size (rows cols): ";
    cin >> n >> m;

    vector<vector<int>> grid(n, vector<int>(m));

    cout << "Enter grid values (0 empty, 1 fresh, 2 rotten):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    int result = orangesRotting(grid);
    cout << "Minimum minutes to rot all oranges: " << result << endl;

    return 0;
}
