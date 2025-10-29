   // author: sovan chakma 
 
#include <bits/stdc++.h>
 
using namespace std;
 
 
int main(){
    
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
 
    while(t--){
 
    string s,ans;
    
    cin>>s;
    
    ans=s[0];
    for(int i=1; i<s.size();i++){
        if(s[i]!=s[i+1]){
            ans+=s[i];
        }else{
            ans+=s[i];
            ans+=(s[i]-'a'+1)%26 +'a';
        }
    }
    int n=s.size();
    if(ans.size()==s.size()){
        ans+=(s[n-1]-'a'+1)%26 +'a';
    }
    cout<<ans<<endl;
    }
    return 0;
}