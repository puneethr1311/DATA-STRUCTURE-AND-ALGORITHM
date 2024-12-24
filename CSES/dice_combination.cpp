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
int mod = 1e9+7;
long long solve(int sum , int csum ,vector<long long>&dp){
    if(csum==sum) return 1;
    if(csum>sum) return 0;
    if(dp[csum]!=-1) return dp[csum];
    long long ans = 0;
    for(int i = 1;i<=6;i++){
        if(sum-i>=0){
            ans+=solve(sum,csum+i,dp)%mod;
        }
    }
    return dp[csum] = ans%mod;
}             
int main(){ 
    int sum;
    cin>>sum;
    vector<long long>dp(sum,-1);
    long long ans = solve(sum,0,dp);
    cout<<ans%mod;
    return 0 ;
}