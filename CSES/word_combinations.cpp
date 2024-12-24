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

int solve(string &str, int index, set<string> &st, int n, int si,vector<vector<int> >&dp) {
    // base case 
    if (index >= n || si >= n) return 0;
    if(dp[index][si]!=-1) return dp[index][si];
    int first = 0, second = 0;
    string z = str.substr(si, index - si + 1);
    
    // If the substring is found in the set
    if (st.find(z) != st.end()) {
        first = 1 + solve(str, index + 1, st, n, si + 1,dp);
    }
    
    // Continue without considering the current substring
    second = solve(str, index + 1, st, n, si,dp);
    
    // Return the maximum of the two choices
    return dp[index][si] = first + second;
}           

int main() { 
    string str;
    cin >> str;

    int k;
    cin >> k;

    set<string> st;
    for (int i = 0; i < k; i++) {
        string z;
        cin >> z;
        st.insert(z);
    }

    int n = str.size();
    vector<vector<int> >dp(n,vector<int>(n,-1));
    int ans = solve(str, 0, st, n, 0,dp);
    cout << ans << endl;
    
    return 0;
}
