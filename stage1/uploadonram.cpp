   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
    
    int n,k;
    cin>>n>>k;
 
    int temp=n*k;
    
    int ans=temp-(k-1);

    cout<<ans<<endl;

    }
	return 0;
}