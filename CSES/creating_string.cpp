#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
using namespace std ; 
void solve(string str , set<string>&ans,int index,int n){
    if(index>=n){
        ans.insert(str);
        return;
    }
    for(int j = index;j<n;j++){
        swap(str[index],str[j]);
        solve(str,ans,index+1,n);
        swap(str[index],str[j]);
    }

}             
int main(){ 
    string str;
    cin>>str;
    int n = str.size();
    set<string>ans;
    solve(str,ans,0 ,n);
    cout<<ans.size()<<endl;
    for (std::set<string>::iterator it = ans.begin(); it != ans.end(); ++it) {
        std::cout << *it << endl;
    }
    return 0 ;
}