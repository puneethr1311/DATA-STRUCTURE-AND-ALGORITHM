#include<iostream>
#include<vector>
using namespace std ; 

int fib_num(int n , vector<int> &c){
    if(n==0 || n==1){
        return n;
    }
    int x=fib_num(n-1,c)+fib_num(n-2,c);
    c.push_back(x);
    return x;
}
                 
int main(){ 
    int n ;
    cout<<"enter the number : ";

    cin>>n ;

    cout<<endl;

    vector<int> c;
    c.push_back(0);
    c.push_back(1);

    int x = fib_num(n,c);
    int l= c.size();

    cout<<"the fib series of n numbers are : "<<endl;
    for(int i=0;i<l;i++){
        cout<<c[i]<<" ";
    }

    


    return 0 ;
}