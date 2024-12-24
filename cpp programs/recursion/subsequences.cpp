#include<iostream>
#include<string>
#include<vector>
using namespace std ; 
                
void find_all_subsequence_of_a_string(string s , vector<string> &ans ,int i , int n , string op ){
    if(i>=n){
        ans.push_back(op);
        return ;
    }
    //exclude
    find_all_subsequence_of_a_string(s,ans , i+1,n,op);
    //include
    char c = s[i];
    op.push_back(c);
    find_all_subsequence_of_a_string(s,ans ,i+1,n,op);

    
}
int main(){ 
    string s ;
    cout<<"enter the string : ";
    cin>>s;

    int n = s.size();
    vector<string>ans ;
    string op ="";
    find_all_subsequence_of_a_string(s,ans,0,n,op);
    int m = ans.size();
    for(int i =0;i<m;i++){
        cout<<ans[i]<<" ";
    }



    return 0 ;
}