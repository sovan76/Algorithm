#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            mp[arr[i]]++;
        }
        int count = 0;
        for(auto it = mp.begin(); it != mp.end(); it++){
            if(it->second >= 3 ){
                count += (it->second / 3);
            }
        }
        cout << count << "\n";
    }
    return 0;
}
