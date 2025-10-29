   // author: sovan chakma 
// Find Second Smallest and Second Largest Element in an array
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
    sort(arr.begin(),arr.end());

      for(int i=0; i<t; i++){
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int current_sm=arr[0];
    int current_sec=0;
    for(int i=1; i<t; i++){
         if(current_sm<arr[i]){
              current_sec=arr[i];
              break;
         }
    }
    int end_larg=0;
    int curr_larg=arr[t-1];
    for(int i=t-1; i>=0; i--){
         if(curr_larg>arr[i]){
              end_larg=arr[i];
              break;
         }
    }

    cout<<"second smallest:"<<current_sec<<"\n";
    cout<<"second largest:"<<end_larg;

	return 0;
}