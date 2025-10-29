// author: sovan chakma 

#include <bits/stdc++.h>
using namespace std;

// Heapify function for max heap
void heapify(vector<int> &arr, int n, int i) {
    int largest = i;         // root
    int left = 2 * i;        // left child
    int right = 2 * i + 1;   // right child

    if (left <= n && arr[left] > arr[largest])
        largest = left;

    if (right <= n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // recursively heapify affected subtree
    }
}

// Build max heap
void buildHeap(vector<int> &arr, int n) {
    for (int i = n / 2; i >= 1; i--) {
        heapify(arr, n, i);
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;

    // +1 for 1-based indexing
    vector<int> arr(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    buildHeap(arr, n);

    for (int i = 1; i <= n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
