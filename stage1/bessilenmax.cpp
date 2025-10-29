#include <bits/stdc++.h>

using namespace std;

int main(){
  
    int t,n;
    cin>>t;
     
     vector<int> arr;
     vector<int> ans;
     mamset(ans,-1);

     while(t--){
        
        cin>>n;
        for(int i=0; i<n; i++){
        	int temp;
        	cin>>temp;
        	arr.push_back(temp);
        }
        int i=0;
       bool dontexist(vector<int> ans, int &x,int &i){
           int j=0;
           while(j<x){
           if(ans[j]!=x && i!=ans[j]){
               return true;
           }
           j++;
           }
           return false;
       }
       while(ans.size()<n){
                 
           int x;
           x=arr[i]+i;
           if(x>=0 && dontexist(ans,x,i)){ 
               ans.push_back(i);
           }else{
            i++;
           }
       }
       for(int i=0; i<n; i++){
           cout<<ans[i];
       }
       cout<<endl;
     }

	return 0;
}