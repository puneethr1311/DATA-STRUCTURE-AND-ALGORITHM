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
    int n ;
    cin>>n;

    vector<long long>arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long cost = 0;
    long long mid = arr[n/2];
    for(int i = 0;i<n;i++){
        cost+=(abs(arr[i]-mid));
    }
    cout<<cost;

    return 0 ;
}