   // author: sovan chakma 
// Given an integer array nums, rotate the array to the left by one.
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

    int temp=arr[0];

    for(int i=0; i<t-1; i++){
    	arr[i]=arr[i+1];
    }
    arr[t-1]=temp;
      for(int i=0; i<t; i++){
    	cout<<arr[i]<<" ";
    }
	return 0;
}