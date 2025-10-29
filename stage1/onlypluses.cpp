   // author: sovan chakma 

#include <bits/stdc++.h>
using namespace std;


int main() {


  freopen("input.txt","r",stdin);

  freopen("output.txt","w",stdout);
    int t;
    cin >> t; 
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c; 
        int arr[3] = {a, b, c};
    
       for (int i = 0; i < 5; ++i) {
        sort(arr, arr+3);
        arr[0]++;
        }
        
        cout << arr[0] * arr[1] * arr[2] << endl;
    }
    
    return 0;
}
