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


    int current_sum=0;
    int temp_max=0,flag=0;
    for(int i=0; i<t; i++){
           if(arr[i]>=0){
           	 current_sum+=arr[i];
           }else{
             temp_max=arr[i];
           	 for(int j=i+1; j<t; j++){
           	 	 int sums=arr[j];
           	 	 temp_max= max(sums+temp_max,temp_max);
           }
           flag=1;
       }
      if(flag==1) break;
    }
    cout<<current_sum+temp_max<<endl;
	return 0;
}