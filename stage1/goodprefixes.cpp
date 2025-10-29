// author: sovan chakma 

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
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        if (n == 1 && arr[0] == 0) {
            cout << 1 << endl;
            continue;
        }

        multiset<int> prefixElements;
        long long prefixSum = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
            prefixElements.insert(arr[i]);
            prefixSum += arr[i];

            if (i == 0 && arr[i] == 0) {
                count++;
            } else {
                long long tempSum = prefixSum - *prefixElements.rbegin();
                if (tempSum == *prefixElements.rbegin()) {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
    return 0;
}
