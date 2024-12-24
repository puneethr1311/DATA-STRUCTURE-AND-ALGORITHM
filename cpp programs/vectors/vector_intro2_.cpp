#include<iostream>
#include<vector>
#include<string.h>
using namespace std ; 

void print_svector(vector<string> &arr){
    int n = arr.size();
    cout<<"array is : ";
    for(int i =0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

}
void print_ivector(vector<int> &arr){
    int n = arr.size();
    cout<<"array is : ";
    for(int i =0;i<n;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;

}

int main(){ 
    vector<string>cars;

    cars.push_back("mercedes");
    cars.push_back("bmw");
    cars.push_back("ford");
    cars.push_back("audi"); 

    print_svector(cars);

    vector<int>nums(3,1);
    nums.push_back(2);
    nums.push_back(3);

    print_ivector(nums);
    cout<<nums.empty()<<endl;//check whether the function is  empty or not!
    cout<<nums.size()<<endl;
    cout<<nums.front()<<endl;
    cout<<nums.back()<<endl;

    cout<<nums[3]<<endl;
    cout<<nums.at(3)<<endl;

    nums.insert(nums.begin(),10);
    print_ivector(nums);

    nums.insert(nums.begin()+3,4);
    print_ivector(nums);

    vector<int>nums2(nums);
    print_ivector(nums2);
    sort(nums.begin(),nums.end());
    print_ivector(nums);
    int maxi = *max_element(nums.begin(),nums.end());
    cout<<maxi<<endl;
    return 0 ;
}