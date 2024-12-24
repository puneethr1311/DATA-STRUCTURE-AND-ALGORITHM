#include<iostream>
using namespace std ; 

long int countnoofwaytoreachnthstairs(int n){
    // if(n<0){
    //     return 0;
    // }else 
    if(n==0||n==1){
        return 1 ;
    }else{
        return countnoofwaytoreachnthstairs(n-1)+countnoofwaytoreachnthstairs(n-2);
    }
}
                 
int main(){ 
    int n;
    cout<<"enter the number of stairs : ";
    cin>>n;
    long long int x = countnoofwaytoreachnthstairs(n);

    cout<<x;



    return 0 ;
}