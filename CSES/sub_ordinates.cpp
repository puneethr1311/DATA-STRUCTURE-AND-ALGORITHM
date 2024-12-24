#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<climits>
#include<string>
#include<utility>
#include<set>
#include<map>
#include<stack>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<cmath>
#include<functional>
#include<deque>
#include<list>
#include<chrono>
                    
using namespace std ; 
int dfs(map<int,vector<int> >&mp,int node,map<int,int>&count){
    if(mp[node].size()==0) return 0;
    int k = 0;
    for(auto it : mp[node]){
        k+= 1 + dfs(mp,it,count);
    }
    count[node]=k;
    return k;
}              
int main(){ 
    int n ;
    cin>>n;
    map<int,vector<int> > mp;
    for(int i = 0;i<n-1;i++){
        int val;
        cin>>val;
        mp[val].push_back(i+2);
    }
    map<int,int> count ;
    //dfs traversal for every node 
    for(auto it : mp){
        if(count[it.first]==0) count[it.first] = dfs(mp,it.first,count);
    }
    for(auto it : count){
        cout<<it.second<<" ";
    }

    return 0 ;
}