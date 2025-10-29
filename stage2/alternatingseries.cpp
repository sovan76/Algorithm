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

        vector<int> ans; 
        int two[2]   = {-1, 2};
        int three[3] = {-1, 3, -1};

        for (int i = 0; i < n;) {
            if (n % 2 == 0) { 
                if (n - ans.size() > 2) {
                    for (int j = 0; j < 2; j++) ans.push_back(three[j]);
                    i += 2;
                } else if (n - ans.size() == 2) {
                    for (int j = 0; j < 2; j++) ans.push_back(two[j]);
                    i += 2;
                }
            } else { 
                if (n - ans.size() > 2) {
                    for (int j = 0; j < 2; j++) ans.push_back(three[j]);
                    i += 2;
                } else{
                    ans.push_back(three[0]);
                    i++;
                }
            }
        }

    
        for (int i = 0; i < ans.size(); i++) {
             cout << ans[i] << " ";
            }

        cout << endl;

        ans.assign(n, 0);
    }

    return 0;
}
