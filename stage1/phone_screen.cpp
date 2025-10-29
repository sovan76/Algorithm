 // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
	
    
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
    int x,y;
    cin>>x>>y;

    int screensFor1x1 = (x + 14) / 15;

    int screensFor2x2 = (y + 3) / 4;

    
    int ans=max(screensFor1x1, screensFor2x2);
    cout<<ans<<endl;


    }
	return 0;
}