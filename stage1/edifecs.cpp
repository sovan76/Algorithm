   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int x,y;
    cin>>x>>y;
    vector<int> arr(12);
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    int front=0,count=0;
    for(int i=1; i<x; i++){

      if(arr[i]-arr[front]>y){
      	 count+=1;
      	 front=i;
      }
    }

    cout<<count+1;
	return 0;
}