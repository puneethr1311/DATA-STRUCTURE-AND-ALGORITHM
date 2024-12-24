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
    int n;
    cin>>n;
    vector<int>coins(n);
    for(int i = 0;i<n;i++) cin>>coins[i];
    sort(coins.begin(),coins.end());
    long long ans = 1;
    for(int i = 0;i<n;i++){
        if(coins[i]>ans) break;
        ans+=coins[i];
    }
    cout<<ans<<endl;

    return 0 ;
}