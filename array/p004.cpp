   // author: sovan chakma 
  //  Remove duplicates from sorted array and return the no. of unique elements


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
     for(int i=0; i<t; i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    int count=0;
    for(int i=0; i<t-1;i++){
    	if(arr[i]!=arr[i+1]){
    		count++;
    	}
    }
    
    cout<<count+1;
     
	return 0;
}