#include <iostream>
#include <vector>

using namespace std;

void findSequence(int n, int k) {
    vector<int> sequence(n, 0);

    int highestPower = 0;
    while ((1 << highestPower) <= k) {
        ++highestPower;
    }
    --highestPower;

    for (int i = 0; i < min(n - 1, highestPower); ++i) {
        sequence[i] = 1 << i;
        k -= sequence[i];
    }

    sequence[n - 1] = k;

    for (int i = 0; i < n; ++i) {
        cout << sequence[i] << " ";
    }
    cout << endl;
}

int main() {
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        findSequence(n, k);
    }

    return 0;
}
