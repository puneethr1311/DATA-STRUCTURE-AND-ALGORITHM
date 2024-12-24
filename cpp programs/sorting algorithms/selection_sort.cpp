#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ; 

void selection_sort(vector<int>&nums , int n){
    int mini_index;
    for(int i = 0;i<n;i++){
        mini_index = i;
        for(int j = i+1;j<n;j++){
            if(nums[j]<nums[mini_index]){
                mini_index = j;
            }
        }
        swap(nums[mini_index],nums[i]);
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
    selection_sort(nums,n);
    print_vector(nums,n);
    return 0 ;
}