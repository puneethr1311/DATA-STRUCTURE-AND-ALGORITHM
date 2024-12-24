#include<iostream>
using namespace std ; 
void print_like_a_wave(int arr[][3],int r,int c){
    cout<<"the wave is "<<endl;
    for(int i =0;i<c;i++){
        if(i%2==0){
            for(int j =0; j< r;j++){
                cout<<arr[j][i]<<" ";
            }
        }else{
            for(int j=r-1;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}
                 
int main(){ 
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    print_like_a_wave(arr,3,3);
    
    return 0 ;
}