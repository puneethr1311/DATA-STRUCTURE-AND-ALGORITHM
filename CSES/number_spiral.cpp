#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ; 
void solve(long long m, long long n) {
    long long val;
    if (m > n) {
        if (m % 2 == 0) {
            val = m * m - n + 1;
        } else {
            val = (m - 1) * (m - 1) + n;
        }
    } else {
        if (n % 2 == 1) {
            val = n * n - m + 1;
        } else {
            val = (n - 1) * (n - 1) + m;
        }
    }
    cout << val << endl;
}          
int main(){ 
    int t;
    cin>>t;
    vector<pair<long long,long long> >arr;
    while(t--){
        long long m ,n;
        cin>>m>>n;
        arr.push_back(make_pair(m,n));
    }
    int n = arr.size();
    for(int i = 0;i<n;i++){
        solve(arr[i].first,arr[i].second);
    }

    return 0 ;
}