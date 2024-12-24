#include<iostream>
#include<algorithm>
using namespace std ; 

void print_array(int*arr , int n){
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void wave_array(int *arr,int n){
    if(n>1){
        swap(arr[0],arr[1]);
        return wave_array(arr+2,n-2);
    }
}

int main(){ 
    int arr[] = {5,7,9,10,14,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    wave_array(arr,n);
    print_array(arr,n);


    return 0 ;
}