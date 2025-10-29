#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007

// Function to multiply two matrices
vector<vector<long long>> matrixMultiply(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
    int n = A.size();
    vector<vector<long long>> C(n, vector<long long>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                C[i][j] = (C[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    return C;
}

// Function to perform matrix exponentiation
vector<vector<long long>> matrixPower(vector<vector<long long>> A, long long p) {
    int n = A.size();
    vector<vector<long long>> result(n, vector<long long>(n, 0));
    for (int i = 0; i < n; ++i) {
        result[i][i] = 1;
    }
    while (p) {
        if (p % 2 == 1) {
            result = matrixMultiply(result, A);
        }
        A = matrixMultiply(A, A);
        p /= 2;
    }
    return result;
}

// Function to solve the problem
long long solve(int N) {
    if (N < 3) return 0;

    // Define the transition matrix based on the problem constraints
    vector<vector<long long>> M = {
        {1, 1, 1, 1},
        {1, 0, 1, 0},
        {1, 1, 0, 0},
        {1, 0, 0, 1}
    };

    // Matrix exponentiation to find M^(N-1)
    vector<vector<long long>> M_N_minus_1 = matrixPower(M, N - 1);

    // Initial state vector (Base case for 3 stories)
    vector<long long> F = {1, 1, 1, 1};

    // Compute the result by multiplying the resulting matrix with the base vector
    long long result = 0;
    for (int i = 0; i < 4; ++i) {
        result = (result + M_N_minus_1[0][i] * F[i]) % MOD;
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

    cout << solve(N) << endl;

    return 0;
}
