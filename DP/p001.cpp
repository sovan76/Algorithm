   // author: sovan chakma 

#include <iostream>
#include <vector>
using namespace std;

int count=0;

int climbing(int n, vector<int> &arr){
    
    count++;
	//base case
	if(n==1 || n==0){
		return 1;
	}
    //recursive case
    
    if(arr[n]!=-1) return arr[n];
    return arr[n]=climbing(n-1,arr)+ climbing(n-2,arr);
}
int main(){
	   
	freopen("input.txt","r",stdin);

	freopen("output.txt","w",stdout);

     int n;
     cin>>n;
     vector<int> arr(n+1,-1);

     int ans=climbing(n, arr);
     cout<<ans<<endl;
     cout<<count<<endl;

	return 0;
}

// tabular method 

// author: sovan chakma 

// #include <iostream>
// #include <vector>

// using namespace std;

// int main(){
	
    
// 	freopen("input.txt","r",stdin);

// 	freopen("output.txt","w",stdout);

      
//      int n,count=0;
//      cin>>n;
//      vector<int> v(n);
     
//      v[0]=1;
//      v[1]=1;
//      for(int i=2; i<=n; i++){
//       count++;
//           v[i]=v[i-1]+ v[i-2];
//      }

//      cout<<v[n]<<endl;
//      cout<<count<<endl;

// 	return 0;
// }