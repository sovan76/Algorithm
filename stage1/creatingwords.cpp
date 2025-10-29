   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
     
    string a,b;
    string aa,bb;

    cin>>a>>b;
    
    aa+=b[0];
    bb+=a[0];
    for(int i=1; i<a.size(); i++){
         aa+=a[i];
         bb+=b[i];
    }
    cout<<aa<<" "<<bb<<endl;

    }
	return 0;
}