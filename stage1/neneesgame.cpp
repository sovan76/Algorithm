#include <bits/stdc++.h>

using namespace std;


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int t;
    cin >> t;

    while (t--) {
        int k, q;
        cin >> k >> q;
        vector<int> a(k);
        vector<int> winners(q);
        for (int i = 0; i < k; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < q; ++i) {
            cin >> winners[i];
        }
        
        sort(a.begin(),a.end());
        for (int i = 0; i < q; i++) {
            if(winners[i]<a[0]){
                cout<<winners[i]<<" ";
            }else{
                cout<<a[0]-1<<" ";
            }
        }

        cout << "\n";
    }

    return 0;
}
