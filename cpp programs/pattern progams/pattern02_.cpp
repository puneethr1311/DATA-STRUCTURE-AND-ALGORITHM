#include<iostream>
using namespace std ; 
                 
int main(){ 
    int n;
    cout<<"enter the number : ";
    cin>>n;
    cout<<endl;

    int i=0;
    while(i<n){
        int j=0;
        while(j<n-1-i){
            cout<<"   ";
            j++;
        }
        j=0;
        while(j<=i){
            cout<<" "<<j+1<<" ";
            j++;
        }
        while(j>1){
            cout<<" "<<j-1<<" ";
            j--;
        }
        cout<<endl;
        i++;

    }

    return 0 ;
}