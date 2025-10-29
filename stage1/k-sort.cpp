// author: sovan chakma 

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;

     while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long coins = 0;
        int max_coins = 0;

        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                int temp = arr[i - 1] - arr[i];
                coins += temp;
                max_coins = max(max_coins, temp); //becz each incre has 1 cost,we take the max cost
                arr[i] += temp;  
            }
        }

        cout << coins + max_coins << endl;  // Add the maximum single increment to the total coins
    }

    return 0;

    return 0;
}
