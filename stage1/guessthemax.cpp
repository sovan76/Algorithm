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

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int global_min_max = INT_MAX;

        for (int start = 0; start < n; start++) {
            int local_max = arr[start]; 
            for (int end = start + 1; end < n; end++) {
                local_max = max(local_max, arr[end]); 
                global_min_max = min(global_min_max, local_max); 
            }
        }
        cout << global_min_max - 1 << endl;
    }

    return 0;
}