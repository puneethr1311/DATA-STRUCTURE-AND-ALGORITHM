#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ; 

void insertion_sort(vector<int>&nums , int n){
    for(int i = 1;i<n;i++){
        int key = nums[i];
        int j = i-1;
        while(j>=0 && key<nums[j]){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}

void print_vector(vector<int>&nums,int n){
    cout<<"the vector : ";
    for(int i = 0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}           

int main(){ 
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(5);
    nums.push_back(4);
    int n = nums.size();
    print_vector(nums,n);
    insertion_sort(nums,n);
    print_vector(nums,n);
    return 0 ;
}