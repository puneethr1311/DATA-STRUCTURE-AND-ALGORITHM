#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ; 
void solve(int i ,int n , string s , vector<string>&ans){
    if(i>=n){
        ans.push_back(s);
        return;
    }
    //push 0
    s.push_back('0');
    solve(i+1,n,s,ans);
    s.pop_back();
    //push 1
    s.push_back('1');
    solve(i+1,n,s,ans);
    s.pop_back();
}

int main(){ 
    int n ;
    cin>>n;
    vector<string> ans;
    string s = "";
    solve(0,n,s,ans);
    int m = ans.size();
    for(int i = 0;i<m;i++){
        cout<<ans[i]<<endl;
    }

    return 0 ;
}