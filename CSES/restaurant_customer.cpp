#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
#include<utility>
using namespace std ; 
bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
    return a.first < b.first;
}
             
int main(){ 
    int n ;
    cin>>n;
    vector<pair<int,int> >time;
    for(int i = 0;i<n;i++){
        int a ,b ;
        cin>>a>>b;
        time.push_back(make_pair(a,1));
        time.push_back(make_pair(b,-1));
    }
    sort(time.begin(), time.end(),comparePairs);
    int count = 0;
    int curr = 0;
    for(int i =0;i<2*n;i++){
       if(time[i].second == 1){
          curr++;
       }else curr--;
       count = max(curr,count);
    }
    cout<<count;

    return 0 ;
}