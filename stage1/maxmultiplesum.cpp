   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
    int n;
    cin>>n;
    
    int index=0,prev=0,i=2;
      while(i<=n){
    	int j=1,ans=0;
    	while(i*j<=n){
    		ans+=i*j;
    		j++;
    	}
    	if(ans>prev){
    		index=i;
    		prev=ans;
    	}
    	i++;
    }
    cout<<index<<endl;


    }
	return 0;
}