#include<iostream>
#include<math.h>
using namespace std ; 
                 
int main(){ 
    int n;
    cout<<"enter the decimal number :  ";
    cin>>n;
    int k=n;

    double ans =0;
    int i =0;
    while(n!=0){
        int bit=n&1;
        ans =ans+(bit*pow(10,i));
        n=n>>1;
        i++;
    }
    cout<<"binary number corrosponded to decimal number  "<<k<<" is : "<<ans;


    return 0 ;
}