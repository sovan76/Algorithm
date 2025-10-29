   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
      
        int a, b;
        cin >> a >> b;
        
        if (a == 2 * b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
       // int totalSum = a + 2 * b;
        
       //  // Check if total sum is even
       //  if (totalSum % 2 != 0) {
       //      cout << "NO" << endl;
       //      continue;
       //  }
        
        // int halfSum = totalSum / 2;
        
        // // Check if halfSum can be achieved
        // // halfSum must be less than or equal to 'a + 2 * min(b, halfSum / 2)'
        // if (halfSum <= a + 2 * min(b, halfSum / 2)) {
        //     cout << "YES" << endl;
        // } else {
        //     cout << "NO" << endl;
        // }

    }
	return 0;
}