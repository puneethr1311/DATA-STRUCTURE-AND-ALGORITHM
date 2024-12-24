#include<iostream>
using namespace std ; 


// void fibonacci_series(int n){
//     for(int i =0;i<n;i++){
//         cout<<" "<<fibonacci_number(i)<<" ";
//     }
    
// }
int fibonacci_number(int n){
    if(n==0||n==1){
        return n;
    }else{
        return fibonacci_number(n-1)+fibonacci_number(n-2);
    }
   
    
}


                 
int main(){ 
   
    

    int n ;
    cin>>n;

    for(int i =0;i<n;i++){
        cout<<" "<<fibonacci_number(i)<<" ";
    }
    // cout<<fibonacci_number(6);

    return 0 ;
}