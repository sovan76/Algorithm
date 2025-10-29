   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    vector<int> arr(t);

    for(int i=0; i<t; i++){
    	cin>>arr[i];
    }
    if(arr.size()<=1){
    	cout<<"-1";
    	return 0;
    }
     for(int i=0; i<t; i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;

    map<int,int> mp;

    for(int i=0; i<t;i++){
    	mp[arr[i]]++;
    }
    cout<<endl;
    int max_ele=0;
    for(int i=0; i<t;i++){
    	// cout<<mp[arr[i]]<<" ";
    	max_ele= max(max_ele,mp[arr[i]]);
    }
    for(int i=0;i<t; i++){
    	if(mp[arr[i]]==max_ele){
    		cout<<arr[i];
    		break;
    	}
    }
	return 0;
}