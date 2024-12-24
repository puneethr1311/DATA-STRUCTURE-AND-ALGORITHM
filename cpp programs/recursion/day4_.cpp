#include<iostream>
#include<string>
using namespace std ; 

void reverse_string(string &str,int s,int e){
    if(s>=e){
        return ;
    }
    swap(str[s],str[e]);
    return reverse_string(str,s+1,e-1);
}
void print_array(int*arr , int n){
    cout<<endl;
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubble_sort(int*arr,int n){
    print_array(arr,n);
    if(n==1){
        return ;
    }
    for(int i =0;i+1<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    return bubble_sort(arr,n-1);
}



                 
int main(){ 
    // string str ="abcde";
    // int len = str.length();

    // reverse_string(str,0,len-1);
    // cout<<str;

    int arr[]={1,4,3,90,3,34,3,9,89};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,n);
    print_array(arr,n);


    return 0 ;
}