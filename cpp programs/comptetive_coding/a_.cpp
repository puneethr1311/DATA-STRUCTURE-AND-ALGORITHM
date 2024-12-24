#include<iostream>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    
    while(t--){
        int a , b , c ;
        cin>>a>>b>>c;
        if(a+b>=10){
            cout<<"yes";
        }else if(a+c>=10){
            cout<<"yes";
        
        }else if(b+c>=10){
            cout<<"yes";
        }else{
            cout<<"no";
        }
        cout<<endl;
    }
    return 0;
}