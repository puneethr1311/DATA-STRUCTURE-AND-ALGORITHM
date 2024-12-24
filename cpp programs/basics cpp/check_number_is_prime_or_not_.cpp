#include<iostream>
using namespace std ;

int main(){
    int x ;
    cout<<"enter the number : ";
    cin>>x;
    cout<<endl;
    
    if(x<2){
        cout<<"this is not a prime number !";
    }
    

    for(int i = 2 ; i < x ; i++){
        if(x%i==0){
            cout<<"this is not a prime number ! ";
            return 0;
        }
    }

    cout<<"this is a prime number ! ";

    return 0 ;
}