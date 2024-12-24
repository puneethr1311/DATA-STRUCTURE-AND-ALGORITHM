#include<iostream>
using namespace std ; 
                 
int main(){ 
    unsigned long long n ;
    cin>>n;
    unsigned long long power = 5;
    unsigned long long count = 0;
    while(n>=power){
        count = count + n/power;
        power= power*5;
    }
    cout<<count;

    return 0 ;
}