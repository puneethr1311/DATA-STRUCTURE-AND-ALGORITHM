#include<iostream>
using namespace std ; 
    int x=10;   //global variable   (data segment mei store hota hai)   (after end of the program memory free)
    // std::cout<<x<<endl;   we can't use cout in outside main function in open way
int main(){ 
    int x=20;//local variable (stack segment mei store hota hai)(after end of the function memory free)
    
    cout<<x<<endl;
    auto a=8;//provide type inference
    cout<<typeid(a).name()<<endl;
    int b ='a';//type casting
    cout<<b<<endl;//it returns the ascii value of a which is 97
    int y=4;
    // if(y%2){
    //     cout<<"yes";
    // }else{
        // cout<<"no";
    // }
    return 0 ;

   
    
}