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

void dfs(vector<vector<char> >&building,int n , int m ,int i,int j, vector<vector<int> >&visited){
    visited[i][j]=1;
    int row[] = {-1, 0, 1, 0};
    int col[] = {0, 1, 0, -1};

    for (int k = 0; k < 4; k++) {
        int ni = i + row[k];
        int nj = j + col[k];

        // Check bounds and conditions
        if (ni >= 0 && ni < n && nj >= 0 && nj < m && building[ni][nj] == '.' && visited[ni][nj] == 0) {
            dfs(building, n, m, ni, nj, visited);
        }
    }
}

int main(){ 
    int  n , m;
    cin>>n>>m;
    vector<vector<char> >building(n ,vector<char>(m,0));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>building[i][j];
        }
    }
    vector<vector<int> >visited(n,vector<int>(m,0));
    int ans = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(visited[i][j]==0 && building[i][j]=='.'){
                ans++;
                dfs(building,n,m,i,j,visited);
            }
        }
    }
    cout<<ans;


    return 0 ;
}