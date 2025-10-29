 // author: sovan chakma 
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    
    int n;
    cin >> n;
     
    int x = 0, y = 0, z = 0;
 
    for (int i = 0; i < n; ++i) {
        int xi, yi, zi;
        cin >> xi >> yi >> zi;
        x += xi;
        y += yi;
        z += zi;
    }
 
    if (x == 0 && y == 0 && z == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
 
    return 0;
}