#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;
const int MAX_N = 50001;
const int MAX_MASK = 64;

int dp[MAX_N][MAX_MASK];
int a[MAX_N];

int main() {
      freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        dp[i][0] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i - 1; j >= 0; --j) {
            if (a[i] > a[j]) {
                for (int mask = 0; mask < MAX_MASK; ++mask) {
                    if ((mask & a[i]) == 0) {
                        dp[i][mask | a[i]] = (dp[i][mask | a[i]] + dp[j][mask]) % MOD;
                    }
                }
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; ++i) {
        for (int mask = 1; mask < MAX_MASK; ++mask) {
            ans = (ans + dp[i][mask]) % MOD;
        }
    }

    cout << ans +1<< endl;

    return 0;
}
