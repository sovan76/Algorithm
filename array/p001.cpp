// Given an array, we have to find the largest element in the array

#include <bits/stdc++.h>
using namespace std;

// Iterative method
void idealmethod(int n, vector<int>& arr) {
    // Input elements
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "Array elements: ";
    for (auto x : arr) cout << x << " ";
    cout << endl;

    sort(arr.begin(), arr.end(), greater<int>());

    cout << "Greatest number (Ite): " << arr[0] << endl;
}

// Recursive method to find max
int recursivemethod(int i, vector<int>& arr, int n) {
    // Base case
    if (i == n - 1)
        return arr[i];

    // Recursive case
    int max_in_rest = recursivemethod(i + 1, arr, n);
    return max(arr[i], max_in_rest);
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    vector<int> arr;
    int n;
    cin >> n;

    idealmethod(n, arr);

    int x = recursivemethod(0, arr, n);
    cout << "Greatest number (Rec): " << x << endl;

    return 0;
}
