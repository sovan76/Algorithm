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
     vector<int> a(n);
     vector<int> b(n+1);
     for(int i=0; i<n; i++){
     	cin>>a[i];
     }
     for(int i=0; i<n+1; i++){
     	cin>>b[i];
     }
     int mini=INT_MAX;
     int count=0;
     for(int i=0;i<n; i++){
     	 count+=abs(a[i]-b[i]);
     }
     for(int i=0; i<n; i++){
     mini=min(mini,abs(a[i]-b[n]));
     }
     int index=0,sign=0;
     for(int i=0; i<n; i++){
        if(b[i]==b[n]){
            count+=1;
            sign=1;
            break;
        }
        if(a[i]>= b[n]){
            index=i;
            break;
        }
     }
     if(sign==0){
     if(b[index]< b[n] && a[index] >= b[n]){
            count+=1;
        }else{
        count+=mini+1;
     }
 }
     cout<<count<<endl;
    }
	return 0;
}