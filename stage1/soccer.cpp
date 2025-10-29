   // author: sovan chakma 

#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    
    while (t--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        
        if((x1 > y1 && x2 > y2) || (x1 < y1 && x2 < y2)){
        	cout<<"yes"<<endl;
        }else{
        	cout<<"no"<<endl;
        }
        
    }
    
    return 0;
}
