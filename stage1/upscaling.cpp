
#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);

    freopen("output.txt","w",stdout);

    int t,n;
    cin>>t;
    while(t--){
      cin>>n;

     int current=1;
     int pre_row=2;
     for(int i=0; i<n*2; i++){
        for(int j=0; j<n*2; j=j+2){
            if(current==1){
            cout<<"##";
            current=0;
            }else{
                cout<<"..";
                current=1;
            }
        }
        if(pre_row>0 && pre_row<3){
                current=1;
                pre_row--;
            }
        if(pre_row>3 && pre_row<6){
                current=0;
                pre_row--;
            }
        if(pre_row==0){
            pre_row=5;
            current=0;
        }
        if(pre_row==3){
            pre_row=2;
            current=1;
        }
        cout<<endl;
    }

}

    return 0;
}
