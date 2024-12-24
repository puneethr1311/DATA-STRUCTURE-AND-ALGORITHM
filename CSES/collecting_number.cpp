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
    vector<int>nums(n),pos(n);
    for(int i = 0;i<n;i++){
        cin>>nums[i];
        pos[nums[i]]=i;
    }
    int round = 1;
    for(int i = 2;i<=n;i++){
        if(pos[i]<pos[i-1]) round++;
    }
    cout<<round;
    return 0 ;
}