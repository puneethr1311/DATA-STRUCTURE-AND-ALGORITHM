#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std ; 
void function_of_pushing(vector<string>&ans ,int m ){
    for(int i =m-1;i>=0;i--){
        ans.push_back(ans[i]);
    }
}                
int main(){ 
    int n;
    cin>>n;
    string str = "";
    vector<string>ans;
    ans.push_back("0");
    ans.push_back("1");
    int m = 2;
    for(int i = 1;i<n;i++){
        function_of_pushing(ans,m);
        m = m*2;
        int j = 0;
        while(j<m/2){
            ans[j] = '0'+ans[j];
            j++;
        }
        while(j<m){
            ans[j] = '1' + ans[j];
            j++;
        }
        
    }
    for(int i = 0;i<m;i++){
        cout<<ans[i]<<endl;
    }

    return 0 ;
}