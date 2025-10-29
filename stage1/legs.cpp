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
    int mini;

    if(n>=4){
    	int temp;
        temp=n/4;
        mini=temp;
        temp=n%4;
        mini+=temp/2;
    }else{
    	mini=n/2;
    }
     
    cout<<mini<<endl;
    
    }
	return 0;
}
