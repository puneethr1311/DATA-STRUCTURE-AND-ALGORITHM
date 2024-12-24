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
    int x;
    cin>>x;
    vector<pair<int,int> >arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i].first;
        arr[i].second = i+1;
    }
    sort(arr.begin(),arr.end(),comparePairs);
    int i = 0;
    int j = n-1;
    bool flag = false;
    while(i<j){
        int sum = arr[i].first + arr[j].first;
        if(sum==x){
            flag = true;
            cout<<arr[i].second<<" "<<arr[j].second;
            break;
        }else if(sum>x) j--;
        else i++;
    }
    if(flag==false) cout<<"IMPOSSIBLE";

    return 0 ;
}