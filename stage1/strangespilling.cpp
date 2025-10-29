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

    vector<int> arr(n);
    for(int i=0; i<n; ++i){
    	cin>>arr[i];
    }
    
    string s="";
    int maxi=0,index;
    for(int i=1; i<n; i++){
       maxi=max(maxi,arr[i]-arr[i-1]);
       index=i-1;
    }
    if(maxi>=1){
    	cout<<"yes"<<endl;
    	for(int i=0; i<n; i++){
    	   if(index==i){
    	   	s+="R";
    	   }else{
             s+="B";
    	   }
    	}
    	cout<<s<<endl;
    }else{
    	cout<<"no"<<endl;
    }
}
	return 0;
}