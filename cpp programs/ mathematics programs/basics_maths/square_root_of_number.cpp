#include<iostream>
using namespace std ; 

double precise_square_root(double sqr,int k){
        int i =0;
        long double n =1;
        long double ans ;
        
        while(i<6){
            n=n/10;
            
            for(long double j =sqr; j*j<=k;j=j+n){
                
                // if(sqr*sqr<=k){
                //     ans = sqr;
                // }else{
                //     break;
                // }
                // sqr=sqr+n;   
                ans =j;
            }
            i++;
        }
        return ans ;
}


int square_root(int n){
    int s=0;
    int e =n;
    int mid ;
    long int square;
    int ans ;
    
    while(s<=e){
        mid=s+(e-s)/2;
        square=mid*mid;
        if(square==n){
            ans = mid;
            
            break;
        }else if(square<n){
            ans =mid;
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return ans ;
}
                 
int main(){ 
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int x=square_root(n);
    double ans =precise_square_root(x,n);
    cout<<ans;

    return 0 ;
}