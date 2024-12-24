#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ; 

void bubble_sort(vector<int>&nums ,int n){
    bool issorted ;
    for(int i = 0;i<n-1;i++){
        issorted = true;
        for(int j = 0;j<n-1-i;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
                issorted = false;
            }
        }
        if(issorted) return;
    }
    cout<<endl;
}

void print_vector(vector<int>&nums,int n){
    cout<<"the vector : ";
    for(int i = 0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}           

int main(){ 
    int n ;
    cout<<"enter the number of elements in vector : ";
    cin>>n;

    vector<int>nums(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
    }
    print_vector(nums,n);
    bubble_sort(nums,n);
    print_vector(nums,n);
    return 0 ;
}