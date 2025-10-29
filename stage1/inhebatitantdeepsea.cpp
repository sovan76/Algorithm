#include <iostream>
#include <vector>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int front = 0, last = n - 1, count = 0, turn = 1;
        while (k > 0 && front <= last) {
            if (turn == 1) {
                if (arr[front] != 0 && k > 0) {
                    k -= 1;
                    arr[front] -= 1;
                }
                if (arr[front] == 0) {
                    count++;
                    front++;
                }
                turn = 0;
            } else if (turn == 0) {
                if (arr[last] != 0 && k > 0) {
                    k -= 1;
                    arr[last] -= 1;
                }
                if (arr[last] == 0) {
                    count++;
                    last--;
                }
                turn = 1;
            }
        }
        cout << count << "\n";
    }

    return 0;
}
