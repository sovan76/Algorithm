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

        long long handlingneg = 0;
        long long current_sum = 0;
        for (int i = 0; i < n; ++i) {
            current_sum += arr[i];
            handlingneg +=arr[i];
            handlingneg=max(handlingneg, abs(current_sum));
            handlingneg=max(handlingneg, abs(handlingneg));
        }

        cout << handlingneg << endl;
    }

    return 0;
}
