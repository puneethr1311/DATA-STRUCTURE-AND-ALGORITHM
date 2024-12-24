#include<iostream>
#include<vector>
using namespace std ; 
                 
int main(){ 
    int n ;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    long long count = 0;
    for(int i = 0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            int diff = arr[i]-arr[i+1];
            arr[i+1]+=diff;
            count+=diff;
        }
    }
    cout<<count;

    return 0 ;
}