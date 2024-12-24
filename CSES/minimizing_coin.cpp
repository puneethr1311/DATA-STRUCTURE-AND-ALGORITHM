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

int solve(vector<int> &coins, int n, int index, int csum, int sum, vector<vector<int> > &dp) {
    if (csum == sum) return 0;
    if (index >= n || csum > sum) return INT_MAX;
    if (dp[index][csum] != -1) return dp[index][csum];

    int pick = solve(coins, n, index, csum + coins[index], sum, dp);
    if (pick != INT_MAX) pick++;

    int notpick = solve(coins, n, index + 1, csum, sum, dp);
    return dp[index][csum] = min(pick, notpick);
}

int main() {
    int n, sum;
    cin >> n >> sum;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    // DP table: [index][current_sum]
    vector<vector<int> > dp(n, vector<int>(sum + 1, -1));

    int ans = solve(coins, n, 0, 0, sum, dp);

    // If no solution exists
    if (ans == INT_MAX) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
