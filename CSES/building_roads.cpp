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
void dfs(vector<vector<int> >&adj_list,int node , int n , vector<int>&visited){
    visited[node]=1;
    for(auto it : adj_list[node]){
        if(visited[it]==-1){
            dfs(adj_list,it,n,visited);
        }
    }
}            
int main(){ 
    int n, m;
    cin>>n>>m;

    vector<vector<int> >adj_list(n+1);
    int u,v;
    for(int i = 0;i<m;i++){
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    vector<int>visited(n+1,-1);
    int comp = 0;
    vector<int>roads;
    for(int i = 1;i<=n;i++){
        if(visited[i]==-1){
            comp++;
            roads.push_back(i);
            dfs(adj_list,i,n,visited);
        }
    }
    cout<<comp-1<<endl;
    int s = roads.size();
    for(int i = 0;i<s-1;i++){
        cout<<roads[i]<<" "<<roads[i+1]<<endl;
    }
    return 0 ;
}