#include <bits/stdc++.h>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        if(n==k){
            for(int i=0; i<n ;i++){
                cout<<"1 ";
            }
        }else if(n!=k && k==1){
            for(int i=0; i<n; i++){
                cout<<i+1;
            }
        }else{
            cout<<"-1 ";
        }
        cout << endl;
    }

    return 0;
}
