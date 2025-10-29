   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int a,b;
     
    vector<int> arr(3);

    cin>>arr[0]>>arr[1];

    sort(arr.begin(),arr.end());

    for(int i=1;  i<=3; i++){
    	if(arr[i]!=i){
    		cout<< i <<endl;
    		break;
    	}
    }
	return 0;
}