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
    for(int i=0; i<n; i++){
    	cin>>arr[i];
    }
    
    int maxi=0;

    for(int i=0; i<n-1; i++){
    	maxi=max(maxi,arr[i]);
    }
    cout<<maxi+arr[n-1]<<endl;

    }
	return 0;
}