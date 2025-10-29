// author: sovan chakma 

#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--) {
        string num;
        cin >> num; 

        char min_digit = '9';
        for (char c : num) {
            if (c < min_digit) {
                min_digit = c;
            }
        }

        cout << min_digit << endl;
    }

    return 0;
}
