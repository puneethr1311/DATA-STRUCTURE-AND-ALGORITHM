#include<iostream>
using namespace std ; 

int sum(int*arr,int n){
    if(n==0){
        return 0;
    }
    
    return arr[0]+sum(arr+1,n-1);
}


bool linear_search(int *arr,int n,int target){
    if(n==0){
        return false;
    }
    if(arr[0]==target){
        return true;
    }else{
        return linear_search(arr+1,n-1,target);
    }
}

bool binary_search(int*arr,int s ,int e , int target){
    
    if(s>e){
        return false;
    }
    int mid =s+(e-s)/2;
    if(arr[mid]==target){
        return true;
    }else if (arr[mid]>target){
        return binary_search(arr,s,mid-1,target);
    }else{
        return binary_search(arr,mid+1,e,target);
    }
}
bool issorted(int arr[], int n ){
    //base case 
    if(n==0||n==1){
        return true ;
    }
    //processing 
    if(arr[0]>arr[1]){
        return false ;
    }
    //recursion relation 
    return issorted(arr+1, n-1);
}
                 
int main(){ 
    int arr[] = {5,7,9,10,14};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    // cout<<sum(arr,n);
    // cout<<endl;
    // int target ;
    // cin>>target;

    // // cout<<"element is present or not ?? : "<<linear_search(arr,n,target);
    //  cout<<"element is present or not ?? : "<<binary_search(arr,0,n-1,target);
    cout<<issorted(arr,n)<<endl;
    return 0 ;
}