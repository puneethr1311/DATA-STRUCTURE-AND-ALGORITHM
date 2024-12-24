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
                    

using namespace std;

const int MAXN = 200005;
vector<int> tree[MAXN];
int dp[MAXN][2]; // dp[u][0]: u not matched, dp[u][1]: u matched

void dfs(int u, int parent) {
    dp[u][0] = 0; // Maximum matching if u is not matched
    dp[u][1] = 0; // Maximum matching if u is matched
    
    for (int v : tree[u]) {
        if (v == parent) continue; // Skip the parent node
        dfs(v, u);
        
        // If u is not matched, take the maximum of both states from v
        dp[u][0] += max(dp[v][0], dp[v][1]);
    }
    
    for (int v : tree[u]) {
        if (v == parent) continue;
        
        // If u is matched with v, include this edge and calculate for the rest of the children
        dp[u][1] = max(dp[u][1], 1 + dp[v][0] + (dp[u][0] - max(dp[v][0], dp[v][1])));
    }
}

int main() {
    int n;
    cin >> n;
    
    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;
        tree[a].push_back(b);
        tree[b].push_back(a);
    }
    
    dfs(1, 0); // Root the tree at node 1
    
    // The answer is the maximum of the two states of the root
    cout << max(dp[1][0], dp[1][1]) << endl;
    
    return 0;
}
