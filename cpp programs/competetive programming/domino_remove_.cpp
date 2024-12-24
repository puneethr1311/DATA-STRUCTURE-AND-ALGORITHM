#include<iostream>
using namespace std ; 

int solution(int A[], int n) {
    // Implement your solution here
    int count =0;
    int ans =n/2;
    if(n==2){
        return 0;
    }
    for(int j=1;j<n-2;j+=2){
        
        int i=j;
        
        count=count+(j/2);
        int k =i+1;
        while(i<n-2&&k<n-1){
            
            if(A[i]!=A[k]){
                k+=2;
                count++;
            }else{
                k+=2;
                i=k-1;
            }
        }
        if(count<ans){
            ans=count;
        }

    }
    return ans;
}

                 
int main(){ 
    int a[22]={5,1,2,6,6,1,3,1,4,3,4,3,4,6,1,2,4,1,6,2};
    int x =solution(a,20);
    cout<<x;


    return 0 ;
}

