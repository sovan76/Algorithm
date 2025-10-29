#include <bits/stdc++.h>
using namespace std;

int countDistinctElements(const vector<vector<int>>& A, vector<vector<vector<int>>>& prefix, int x, int y, int size) {
    set<int> distinctElements;
    for (int i = x; i < x + size; ++i) {
        for (int j = y; j < y + size; ++j) {
            distinctElements.insert(A[i][j]);
        }
    }
    return distinctElements.size();
}

int get_ans(int N, vector<vector<int>>& A) {

    vector<vector<vector<int>>> prefix(N, vector<vector<int>>(N, vector<int>(N, 0)));
    
    for (int size = 1; size <= N; ++size) {
        for (int i = 0; i <= N - size; ++i) {
            for (int j = 0; j <= N - size; ++j) {
                int distinctCount = countDistinctElements(A, prefix, i, j, size);
                prefix[i][j][size - 1] = distinctCount;
            }
        }
    }

    
    vector<vector<int>> dp(N, vector<int>(N, 0));
    int result = 0;

    for (int i = 0; i < N; ++i) {
        vector<int> rowMax(N, 0);
        for (int size = 1; size <= N; ++size) {
            if (i - size + 1 >= 0) {
                int maxValue = 0;
                for (int j = 0; j <= N - size; ++j) {
                    maxValue = max(maxValue, prefix[i - size + 1][j][size - 1]);
                }
                rowMax[size - 1] = maxValue;
            }
        }
        dp[i] = rowMax;
        result = max(result, *max_element(dp[i].begin(), dp[i].end()));
    }

    return result;
}

int main() {
      freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> A[i][j];
        }
    }

    cout << get_ans(N, A) << endl;

    return 0;
}
