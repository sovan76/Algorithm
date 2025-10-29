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
    vector<int>arr(n+1);
    vector<int> ans;
    for(int i=0; i<n; ++i){
    	cin>>arr[i];
    }
    ans.push_back(arr[0]);
    if(n==1){
    	cout<<"1"<<endl;
    	cout<<ans[0]<<endl;
    	continue;
    }
    for(int i=1; i<n; i++){
        if(arr[i] <= arr[i-1]){
             if(arr[i]!=arr[i-1]){
        	 ans.push_back(arr[i]);
        	}
         	 ans.push_back(arr[i]);
        }else if(arr[i] > arr[i-1]){
           ans.push_back(arr[i]);
        }
    }
    int m=ans.size();
    cout<<m<<endl;
    for(int i=0; i<m; i++){
    	cout<<ans[i]<<" ";
    }
    cout<<endl;

    }
	return 0;
}