#include<iostream>
using namespace std ; 
                 
int main(){ 
    char input;
    cout<<"enter the number : ";
    cin>>input;
    cout<<endl;
    int i =0;
    char alphabet='A';
    while(i<input-'A'+1){
        int j=0;
        while(j<input-'A'+1){
            cout<<alphabet;
            j++;
             }
             cout<<endl;
             alphabet++;
             i++;
        }

    return 0 ;
}