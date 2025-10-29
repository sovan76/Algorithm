   // author: sovan chakma 

#include <bits/stdc++.h>

using namespace std;


int main(){
    
    
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);

    int t;
    cin>>t;

    while(t--){
     
     long long int x;
     cin>>x;
    
     bool count=false;
     int reminder=0;
     int flag=0;
     if(x%10>=9){
        cout<<"NO"<<endl;
        continue;
     }else{
         while(x>=10){

           reminder= x%10;
           if(reminder-5>4 && reminder-5 <10){
               count=true;
           }else if((reminder+10)-(reminder+1)>4 && (reminder+10)-(reminder+1)<10){
               count=true;
               flag=1;
           }else{
               count=false;
           }
           if(flag==1){
            x=x-1;
            x=x/10;
           }else{
            x=x/10;
           }
        }
     }
     if(count==true){
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }

    }
    return 0;
}