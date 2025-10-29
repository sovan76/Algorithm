   // author: sovan chakma 
 // Checks if the array is sorted.

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
    	cout<<"true";
    	return 0;
    }
     for(int i=0; i<t; i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool flag;
    for(int i=0; i<t-1; i++){
    	if(arr[i]<=arr[i+1]){
    		flag=1;
    	}else{
    		flag=0;
    		break;
    	}
    }
    if(flag==1){
    	cout<<"true";
    }else{
    	cout<<"false";
    }
	return 0;
}