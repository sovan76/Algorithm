   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
     
    vector<int> arr(3);
    for(int i=0;i<3; i++){
    	cin>>arr[i];
    }
    int a,b,c;
    a=arr[0];
    b=arr[1];
    c=arr[2];
    int ans=INT_MAX;
    for(int i=0; i<3; i++){
    	int temp= abs(a-arr[i])+ abs(b-arr[i])+ abs(c-arr[i]);
    	ans=min(temp,ans);
    }
    
    cout<<ans<<endl;
    }
	return 0;
}