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
    int target;
    cin>>target;
    vector<int>arr(n); // 2 3 5 8 9 10 
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int i = 0;
    int j = n-1;
    sort(arr.begin(),arr.end()); // 2 3 5 8 9 10
    
    while(i<j){
        if(arr[i]+arr[j]==target){
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }else if(arr[i]+arr[j]>target){
            j--;
        }else{
            i++;
        }
    }
    

    return 0 ;
}