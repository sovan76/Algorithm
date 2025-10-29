#include <bits/stdc++.h>
using namespace std;

int main() {
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int total_decrease = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                total_decrease += (a[i] - b[i]);
            }
        }

        cout << total_decrease + 1 << "\n";
    }
    return 0;
}
