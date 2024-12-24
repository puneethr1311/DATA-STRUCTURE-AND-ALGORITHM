#include<iostream>
using namespace std ; 
                 
int main(){ 
    int n;
    cin>>n;
    int xoro = 0;
    int i = 1;
    while(i<n+1){
        xoro = xoro^i;
        i++;
    }
    i=1;
    while(i<n){
        int val;
        cin>>val;
        xoro = xoro^val;
        i++;
    }
    cout<<xoro;

    return 0 ;
}