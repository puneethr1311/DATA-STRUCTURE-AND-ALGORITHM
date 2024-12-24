#include<iostream>
using namespace std ; 
                 
int main(){ 
    unsigned long long n ;
    cin>>n;
    unsigned long long base = 2;
    unsigned long long mod = 1e9+7;
    unsigned long long ans = 1;

    while(n>0){
        if(n%2==1){
            ans = (ans*base)%mod;
        }
        base = (base*base)%mod;
        n=n/2;
    }
    cout<<ans;

    return 0 ;
}