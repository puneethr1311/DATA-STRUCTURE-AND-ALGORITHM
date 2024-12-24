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
                 
int main(){ 
    int n ; // n cities
    cin>>n;
    int m ; // m roads
    cin>>m;
    vector<vector<int> >adj(n+1); // how each road connected to each other
    
    int u ,v;
    for(int i = 0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    return 0 ;
}