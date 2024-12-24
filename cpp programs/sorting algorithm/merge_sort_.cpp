#include<iostream>
#include<vector>
#include<algorithm>

using namespace std ; 

void print_array(vector<int> &arr , int n ){
    cout<<"elements in the array are : ";
    for(int i =0;i<n;i++){
        cout<<arr.at(i)<<" ";
    }
}
                 
int main(){ 
    vector<int> arr ;
    
    int n ;
    cout<<"enter the number of elements in the array you want : ";
    cin>>n;
    cout<<"enter the elements in the array : "<<endl;
     
    print_array(arr,n);
    

    return 0 ;
}