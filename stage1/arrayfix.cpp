#include <iostream>
#include <vector>

using namespace std;

bool canbesorted(vector<int> &arr){
        int temp=0;
        for(int i=0; i<arr.size(); i++){ //test case 75 59 
                                        //for 75   7<5 is not true
            if(arr[i]>9 && arr[i]/10>=temp && arr[i]/10<=arr[i]%10){
              temp=arr[i]%10;
            }else{
              if(temp<=arr[i]){ // so now we have to check in the next iteration 
                                // if 75 < 59 ..now we have checked throughly thus false
              temp=arr[i];
             }else{
                return false;
            }
            }
    }
       return true;
}
 // the fact it is dp is because 75 79 was subproblem ..n if it was
// true the next same logic applied would be true

int main() {
 
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   #endif
    
    int t;
    cin >> t;
   
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
 
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
 
        if(canbesorted(arr)){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }
 
    return 0;
}