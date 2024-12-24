#include<iostream>
#include<vector>//STL container
using namespace std ; 

void print_vector(vector<int> &arr){
    int n = arr.size();
    cout<<"array is : ";
    for(int i =0;i<n;i++){
        cout<<" "<<arr[i];
    }

}
                 
int main(){ 
    vector<int>nums;
    int x,y;
    x= nums.capacity();
    y =nums.size();
    cout<<x<<endl<<y;
    cout<<endl;
    nums.push_back(1);

    x= nums.capacity();
    y =nums.size();
    cout<<x<<endl<<y;
    cout<<endl;

    nums.push_back(3);
    x= nums.capacity();
    y =nums.size();
    cout<<x<<endl<<y;
    cout<<endl;

    nums.push_back(5);
    x= nums.capacity();
    y =nums.size();
    cout<<x<<endl<<y;
    cout<<endl;

    nums.pop_back();
    x= nums.capacity();
    y =nums.size();
    cout<<x<<endl<<y;
    cout<<endl;

    nums.push_back(10);
    nums.push_back(10);
    nums.push_back(10);
     x= nums.capacity();
    y =nums.size();
    cout<<x<<endl<<y;
    cout<<endl;

    print_vector(nums);
    cout<<endl;

    

    return 0 ;
}