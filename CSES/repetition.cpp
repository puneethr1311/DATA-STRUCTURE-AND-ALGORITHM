#include<iostream>
#include<string>
#include<vector>
using namespace std ; 
                 
int main(){ 
    string s ;
    cin>>s;
    
    int n = s.size();
    int count = 0;
    int init = 0;
    char ch = s[0];
    for(int i = 0;i<n;i++){
       if(ch !=s[i]){
          init = 1;
          ch = s[i];
       }else{
            init++;
       }
       count = max(count,init);
    }
    cout<<count;
    return 0 ;
}