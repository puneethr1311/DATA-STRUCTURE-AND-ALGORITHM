#include<iostream>
using namespace std ; 
                 
int main(){ 
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if((2*x-y)>=0 && ((2*x-y)%3==0) && (2*y-x)>=0 && ((2*y-x)%3==0)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0 ;
}