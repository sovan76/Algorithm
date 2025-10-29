#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        
        vector<int> atta(n);
        vector<int> defa(n);
        vector<int> attp(n);
        vector<int> defp(n);
        
        int totalatta = 0;
        int totaldefa = 0;
        int totalattp = 0;
        int totaldefp = 0;
        
        for(int i = 0; i < n; i++){
            cin >> atta[i];
            totalatta += atta[i];
        }
        for(int j = 0; j < n; j++){
            cin >> defa[j];
            totaldefa += defa[j];
        }
        for(int i = 0; i < n; i++){
            cin >> attp[i];
            totalattp += attp[i];
        }
        for(int i = 0; i < n; i++){
            cin >> defp[i];
            totaldefp += defp[i];
        }
        
        if(totalatta > totalattp && totaldefa > totaldefp){
            cout << "A" << endl;
        } else if(totalatta < totalattp && totaldefa < totaldefp){
            cout << "P" << endl;
        } else{
            cout << "DRAW" << endl;
        }  
    }
    return 0;
}
