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

bool isbiparpite(vector<vector<int> > &adj, int n , vector<int>&teams){
    queue<int>q;
    for(int i = 0;i<=n;i++){
        if(teams[i]==0){
            q.push(i);
            teams[i] = 1;
            while(!q.empty()){
                int node = q.front();
                q.pop();
                for(int it : adj[node]){
                    if(teams[it]==0){
                        teams[it] = 3 - teams[node];
                        q.push(it);
                    }else{
                        if(teams[it]==teams[node]){
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}

int main(){ 
    int n , m ;
    cin>>n>>m;
    vector<vector<int> > adj(n+1);
    int u , v;
    for(int i = 0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> teams(n+1,0); // 0 -> not visited , 1 -> team 1 , 2 -> team 2

    if(isbiparpite(adj,n,teams)){
        for(int i = 1;i<=n;i++){
            cout<<teams[i]<<" ";
        }
    }else{
        cout<<"IMPOSSIBLE";
    }
    

    return 0 ;
}
