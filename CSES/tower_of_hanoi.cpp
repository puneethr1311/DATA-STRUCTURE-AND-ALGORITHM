#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std ; 
vector<pair<int,int> > ans;
void solve(int n , int source ,int destination,int inter ){
    if(n==1){
        pair<int,int> p;
        p = make_pair(source,destination);
        ans.push_back(p);
    }else{
        solve(n-1,source ,inter,destination);
        pair<int,int> p;
        p = make_pair(source,destination);
        ans.push_back(p);
        solve(n-1,inter,destination,source);
    }
}              
int main(){ 
    int n ;
    cin>>n;

    solve(n,1,3,2);
    int m = ans.size();
    cout<<m<<endl;
    for(int i = 0;i<m;i++){
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }

    return 0 ;
}